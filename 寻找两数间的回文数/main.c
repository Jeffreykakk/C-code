#include <stdio.h>

int ispalindrome(int n)
{
    int sum=0,num=n;
    while(n)
    {
        sum=sum*10+n%10;
        n/=10;
    }
    if(sum==num)
    return 1;
    else
    return 0;
}

int main() 
{
	int low=0,high=0,i=0;
	scanf("%d %d",&low,&high);
	for(i=low;i<=high;i++)
	{
		int ret=ispalindrome(i);
		if(ret==1)
		printf("%d ",i);
	}
	return 0;
}