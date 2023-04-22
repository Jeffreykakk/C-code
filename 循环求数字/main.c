#include <stdio.h>
#include <stdlib.h>

//809*??=800*??+9*?? 
//??-->two digits, 809*??-->four diguts, 8*??-->two digits, 9*??-->three digits
//??==

int main() 
{
	int i=0;
	for(i=10;i<100;i++)
	{
		if(809*i>=1000&&809*i<10000&&8*i>=10&&8*i<100&&9*i>=100&&9*i<1000)
		printf("%d",i);
	}
	return 0;
}