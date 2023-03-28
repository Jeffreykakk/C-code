#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() 
{
	srand((unsigned)time(NULL));
	int guess,n=0,dat=rand()%100+1;
	while(n<10)
	{
		scanf("%d",&guess);
		if(guess>dat)
		{
			printf("too big\n");
			n++;
		}
		else if(guess<dat)
		{
			printf("too small\n");
			n++;
		}
		else
		{	
			printf("too lucky\n");
			break;
		}
	}
	if(n==10)
	printf("unlucky!\n");
	return 0;
}