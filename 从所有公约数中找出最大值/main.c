#include <stdio.h>

int main() 
{
	int a,b,i,j,m=0,n=0;
	int arra[100],arrb[100];
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			arra[m]=i;
			m++;
		}
	}
	for(i=1;i<=b;i++)
	{
		if(b%i==0)
		{
			arrb[n]=i;
			n++;
		}
	}
	for(i=m-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
				if(arra[i]==arrb[j])
			{
				printf("greatest common divisor=%d\n",arra[i]);
				goto again; 
			}
		}
	}
	again:
	return 0;
}