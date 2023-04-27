#include <stdio.h>
#include <math.h>

float collect(float s,float t,int m,float (*p)(float x));
float fun1(float x);
float fun2(float x);
float fun3(float x);
float fun4(float x);

int main()
{
    int n=0,flag=0;
    float a,b,v=0.0;
    printf("Input the count range(from A to B)and the number of sections.\n");
    scanf("%f%f%d",&a,&b,&n);
    printf("Enter your choice:\n'1' for fun1\n'2' for fun2\n'3' for fun3\n'4' for fun4\n==> ");
    scanf("%d",&flag);
    if(flag==1)
        v=collect(a,b,n,fun1);
    else if(flag==2)
        v=collect(a,b,n,fun2);
    else if(flag==3)
        v=collect(a,b,n,fun3);
    else
        v=collect(a,b,n,fun4);
    printf("v=%f\n",v);
    return 0;
}

float collect(float s,float t,int n,float (*p)(float x))
{
    int i=0;
    float f=0.0,h=0,x=0,y1=0,y2=0,area;
    h=(t-s)/n;
    x=s;
    y1=(*p)(x);
    for(i=1;i<=n;i++)
    {
        x=x+h;
        y2=(*p)(x);
        area=(y1+y2)*h/2;
        y1=y2;
        f=f+area;
    }
    return (f);
}

float fun1(float x)
{
    float fx=0;
    fx=x*x-2.0*x+2.0;
    return(fx);
}

float fun2(float x)
{
    float fx=0;
    fx=x*x*x+3.0*x*x-x+2.0;
    return(fx);
}

float fun3 (float x)
{
    float fx=0;
    fx=x*sqrt(1+cos(2*x));
    return(fx);
}

float fun4(float x)
{
    float fx=0;
    fx=1/(1.0+x*x);
    return(fx);
}