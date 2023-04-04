#include <stdio.h>
#include <math.h>

int figure(int n)
{
	int count=0;
	while(n)
	{
		n=n/10;
		count++;
	}
	return count;
}

int main() 
{
    int num1=0,num2=0,ret=0;
    scanf("%d",&num1);
    int n=num1;
    ret=figure(n)-1; 
    while(n)
    {
        num2=n%10*pow(10,ret)+num2;
        ret--;
        n=n/10;
    }
	printf("num1 = %d\nnum2 = %d\n",num1,num2);
    return 0;
}