#include <stdio.h>
#include <stdlib.h>

#define cat(x,y) x##y

int main() 
{
	int num10=10;
	printf("%d",cat(num,10));
	return 0;
}