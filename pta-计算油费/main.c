#include <stdio.h>

int main()
{
	int a=0,b=0;
	char c=0;
	float d=0;
	scanf("%d %d %c",&a,&b,&c);
	switch(b)
	{
		case 90:
			if(c=='m')
			printf("%.2f",a*6.95*0.95);
			if(c=='e')
			printf("%.2f",a*6.95*0.97);
			break;
		case 93:
			if(c=='m')
			printf("%.2f",a*7.44*0.95);
			if(c=='e')
			printf("%.2f",a*7.44*0.97);
			break;
		case 97:
			if(c=='m')
			printf("%.2f",a*7.93*0.95);
			if(c=='e')
			printf("%.2f",a*7.93*0.97);
			break;	
	}
	return 0;
}