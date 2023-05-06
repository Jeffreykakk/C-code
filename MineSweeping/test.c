#include "game.h"

int main()
{
    int input=0;
    do
    {
        menu();
        printf("choose:> ");
        scanf("%d",&input);
        switch (input)
        {
            case 1:
            game();
            break;
            case 0:
            printf("exit!\n");
            break;
            default:
            printf("\ninput error!\n");
            break;
        }
    }while(input);
    return 0;
}