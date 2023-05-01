#include <stdio.h>

void splitfloat(float x,int* intpart,float* fracpart)
{
	*intpart=(int)x;
	*fracpart=x-*intpart;
}

int main()
{
    float x=0,fracpart=0;
    int intpart=0;
    scanf("%f",&x);
    splitfloat(x,&intpart,&fracpart);
    printf("The integer part is %d\n", intpart);
    printf("The fractional part is %g\n", fracpart);
    return 0;
}
