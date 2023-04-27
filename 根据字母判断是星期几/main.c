#include<stdio.h>

int main()
{
	char i=0,j=0;
    printf("first letter\n");
    scanf("%c",&i);
    getchar();
	switch(i)
	{
		case 'm':
	            printf("monday\n");
	            break;
	    case 'w':
	            printf("wednesday\n");
	            break;
	    case 'f':
	            printf("friday\n");
	            break;
	    case 't':
	            printf("second letter\n");
	            scanf("%c",&j);
	            if (j=='u') 
				{
					printf("tuesday\n");
					break;
				}
				else if (j=='h') 
				{
					printf("thursday\n");
					break;
				}
				else
				{
					printf("input error\n"); 
					break;
				}
		case 's':
	            printf("second letter\n");
	            scanf("%c",&j);
	            if (j=='a') 
				{
					printf("saturday\n");
					break;
				}
				else if (j=='u') 
				{
					printf("sunday\n"); 
					break;
				}
				else
				{
					printf("input error\n"); 
					break;
				}
		default :
	            printf("input error\n"); 
				break;
	    }
	return 0;
}