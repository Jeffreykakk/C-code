#include <stdio.h>

int main()
{
	int m=0,i=0,j=0,k=0,count=0;
	scanf("%d",&m);
	for(i=m;i>0;i--)
	{
			for(j=m;j>0;j--)
		{
				for(k=m;k>0;k--)
			{
				if(5*i+2*j+k==m)
				{
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i,j,k,i+j+k);
					count++;
				}
			}
		}
	}
	printf("count = %d\n",count);
	return 0;
}