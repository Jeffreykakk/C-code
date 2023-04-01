#include <stdio.h>

int main()
{
    int i=0,a=0,sum=0;
    scanf("%d",&a);
	for(i=1;i<a;i++)
    {
        if(a%i==0)
        {
            sum+=i;
    	}
    }
    if(sum==a)
    printf("yes\n");
    return 0;
}