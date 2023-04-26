#include <stdio.h>
#include <math.h>

int main()
{
	int a=0,b=0;
	int x=0;
	scanf("%d %d",&a,&b);
	x=round((a-b)*1.0/b*100);
	if(x<10)
		printf("OK");
	if(x>=10 && x<50)
		printf("Exceed %d%%. Ticket 200",x);
	if(x>=50)
		printf("Exceed %d%%. License Revoked",x);
	return 0;
}