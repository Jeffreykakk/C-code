#include <stdio.h>

int main()
{
	int a=0,b=0,e=0,d=0,c,count=0;
	while(count<10)
	{
		c=getchar();
		if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		a++;
		else if (c == ' '|| c=='\n')
		b++;
		else if (c >= '0' && c <= '9')
		e++;
		else
		d++;
		count++;
	}
	printf("letter=%d,blank=%d,digit=%d,other=%d",a,b,e,d);
	return 0;
}