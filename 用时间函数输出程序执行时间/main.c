#include <stdio.h>
#include <time.h>

int main()
{
    time_t start,end;
    int i;
    start=time(NULL);
    for(i=0;i<30000;i++)
    printf("\n");
    end=time(NULL);
    printf("time:%6.3f\n",difftime(end,start));
}