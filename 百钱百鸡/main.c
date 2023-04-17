#include <stdio.h>


int main() 
{
	int cock=0,hen=0,chick=0;
	for(cock=0;cock<=20;cock++)
		for(hen=0;hen<=33;hen++)
			for(chick=0;chick<=99;chick++)
			{
				if(cock*5+hen*3+chick/3==100&&chick%3==0&&cock+hen+chick==100)
				printf("cock = %d hen = %d chick = %d \n",cock,hen,chick);
			}
	return 0;
}