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
    ret=figure(num1)-1; 
    while(num1)
    {
        num2=num1%10*pow(10,ret)+num2;
        ret--;
        num1=num1/10;
    }
    if(n==num2)
	printf("yes\n");
    return 0;
}