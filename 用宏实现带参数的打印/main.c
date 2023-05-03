#include <stdio.h>
#define print(x,format) printf("the value of "#x" is "format"\n",x)

int main() 
{
	int a = 10;
	float b = 5.5f;
	print(a,"%d");
	print(b,"%.1f");
	return 0;
}