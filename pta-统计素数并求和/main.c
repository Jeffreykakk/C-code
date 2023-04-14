#include <stdio.h>

int is(long i)
{
	if(i==1)
	return -1;
	int j=0;
	for(j=2;j<i;j++)
	{
		if(i%j==0)
			return 0;
	}
	return 1;
}
int main()
{
	long m=0,n=0,i=0,sum=0,count=0;
	scanf("%ld %ld",&m,&n);
	if(m==1&&n==1)
	printf("%ld %ld\n",count,sum);
	else
	{
		for(i=m;i<=n;i++)
		{
            if(is(i)==1)
            {
                sum+=i;
                count++;
            }
	    }
	printf("%ld %ld\n",count,sum);
	}
	return 0;
}