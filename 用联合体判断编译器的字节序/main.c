#include <stdio.h>



int judge_sys()
{
	union un
	{
		char c;
		int i;
	}u;
	u.i=1;
	return u.c;
}

int main() 
{	
	if(judge_sys()==1)
	printf("small\n");
	else
	printf("big\n");
	return 0;
}