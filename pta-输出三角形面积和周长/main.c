#include <stdio.h>
#include <math.h>

int main()
{
	int a=0,b=0,c=0;
	float d=0,e=0;
	scanf("%d %d %d",&a,&b,&c);
	if(a>0 && b>0 && c>0 && a+b>c && a+c>b && b+c>a)
	{
		float s=(a+b+c)/2.0;
		e=a+b+c;
		d=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("area = %.2f; perimeter = %.2f",d,e);
	}
	else
	printf("These sides do not correspond to a valid triangle");
	return 0;
}