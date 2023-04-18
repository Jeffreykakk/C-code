#include <stdio.h>
#include <math.h>

int main() 
{
	int i=0;
	for(i=2;i<=sqrt(168);i+=2)
	{
		int j=168/i,m=0,n=0;
		if(j%2==0)
		{
			m=(i+j)/2;
			n=(i-j)/2;
			if(m*m-268==n*n-100)
			{
				int x=m*m-268;
				printf("%d+100=%d*%d\t%d+100+168=%d*%d\n",x,n,n,x,m,m);
			}
		}
	}
	return 0;
}