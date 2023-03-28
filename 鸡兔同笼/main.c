#include <stdio.h>

int main() 
{
	int head,legs,kun,rab;
	scanf("%d%d",&head,&legs);
	for(kun=0,rab=head;kun*2+rab*4!=legs;kun++,rab--)
	{
		;
	}
	printf("kun=%d\nrab=%d",kun,rab);
	return 0;
}