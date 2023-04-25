#include <stdio.h>
#include <string.h>

void menu()
{
	printf("\n");
	printf("*************************\n");
	printf("***1 encrypt 2 decrypt***\n");
	printf("******** 0 exit *********\n");
}

char* encrypt(char* str)
{
    char* start=str;
    int len=strlen(str),i=0;
    for(i=0;i<len;i++)
    *(str+i)+=(i+5);
    return start;
}

char* decrypt(char* str)
{
    char* start=str;
    int len=strlen(str),i=0;
    for(i=0;i<len;i++)
    *(str+i)-=(i+5);
    return start;
}

int main()
{
    char str[50]={0};
    int input=0;
    do
    {
    	menu();
    	printf("choose:");
    	scanf("%d",&input);
    	getchar();
        switch(input)
        {
            case 1:
	            printf("encpypt string:");
	            gets(str);
	            printf("%s\n",encrypt(str));
	            break;
            case 2:
	            printf("decpypt string:");
	            gets(str);
	            printf("%s\n",decrypt(str));
	            break;
            case 0:
            	printf("exit!\n");
            	break;
            default:
	            printf("input error\n");
	            break;
        }
    }while(input);
    return 0;
}