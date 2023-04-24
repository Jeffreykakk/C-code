#include <stdio.h>
#include <math.h>

typedef struct figure
{
    int a;
    int b;
    int c;
}figure;

void Initfigure(figure* f)
{
    printf("a:");
    scanf("%d",&f->a);
    printf("b:");
    scanf("%d",&f->b);
    printf("c:");
    scanf("%d",&f->c);
}

int judge(figure* f)
{
    if(f->a>0&&
         f->b>0&&
         f->c>0&&
         f->a+f->b>f->c&&
         f->a+f->c>f->b&&
         f->c+f->b>f->a)
    {
        int aa=pow(f->a,2);
        int bb=pow(f->b,2);
        int cc=pow(f->c,2);
        if(aa+bb==cc||bb+cc==aa||aa+cc==bb)
        return 1;
        else 
        return 0;
    }
    return 0;
}

int main()
{
    figure f={0};
    Initfigure(&f);
    int ret=judge(&f);
    if(ret==1)
    printf("yes!\n");
    else
    printf("no!\n");
    return 0;
}