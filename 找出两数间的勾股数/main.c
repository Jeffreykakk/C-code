#include <stdio.h>
#include <math.h>

typedef struct figure
{
    int a;
    int b;
    int c;
}figure;

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
    int i=0,j=0,k=0,low=0,high=0;
    scanf("%d %d",&low,&high);
    for(i=low;i<=high;i++)
    for(j=i;j<=high;j++)
    for(k=j;k<=high;k++)
    {
        f.a=i;
        f.b=j;
        f.c=k;
        int ret = judge(&f);
        if(ret==1)
        printf("%d %d %d\n",f.a,f.b,f.c);
    }
    return 0;
}