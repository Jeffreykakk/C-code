#include <stdio.h>
#include <math.h>


int isprime(int n)
{
	if(n<2)
	return 0;
    int i=0;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}

void judge(int n)
{
	int i=0;
	for(i=3;i<=n-3;i++)
	{
		if(isprime(i)==1&&i%2==1&&isprime(n-i)==1&&(n-1)%2==1)
		{
			printf("%d = %d + %d\n",n,i,n-i);
			break;
		}
	}
}

int main() 
{
	int input=8;
	do
	{
		if(input<6||input%2==1)
		printf("input error!\ninput again!\n");
		scanf("%d",&input);
	}while(input<6||input%2==1);
	judge(input);
	return 0;
}