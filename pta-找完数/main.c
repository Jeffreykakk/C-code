#include <stdio.h>

void print(int i,int k)
{
	int j=0;
	printf("%d = ",i);
	for(j=1;j<i;j++)
	{
		if(i%j==0)
		{
			if(k>1)
			{
				printf("%d + ",j);
				k--;
			}
			else
			printf("%d",j);
		}
	}
	printf("\n");
}

int main() 
{
	int m=0,n=0,count=0;
	scanf("%d %d",&m,&n);
	int i=0;
	for(i=m;i<=n;i++)
	{
		int j=0,sum=0,k=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum+=j;
				k++;
			}
		}
		if(sum==i)
		{
			print(i,k);
			count=1;
		}
	}
	if(count==0)
	printf("None\n");
	return 0;
}