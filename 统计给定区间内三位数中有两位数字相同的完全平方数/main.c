#include <stdio.h>
#include <math.h>

int search( int n );
int is_square(int n);
int judge(int n);

int main()
{
    int number=0;
    scanf("%d",&number);
    printf("count=%d\n",search(number));  
    return 0;
}

int search( int n )
{
	int i=0,count=0;
	for(i=101;i<=n;i++)
	{
		if(is_square(i)==1&&judge(i)==1)
		count++;
	}
	return count;
}

int judge(int n)
{
	int a=n%10;
	int b=(n/10)%10;
	int c=(n/100)%10;
	int count=0;
	if(a==b)
	count++;
	if(b==c)
	count++;
	if(a==c)
	count++;
	if(count==1)
	return 1;
	else 
	return 0;
}

int is_square(int n)
{
	int m=sqrt(n);
	if(pow(m,2)==n)
	return 1;
	else
	return 0;
}
