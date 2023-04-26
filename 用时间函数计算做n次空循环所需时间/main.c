#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    long i=10000000L;
    clock_t start,finish;
    double TheTimes;
    printf("%ld\n",i);
    start=clock();
    while(i--);
    finish=clock();
    TheTimes=(double)(finish-start)/CLOCKS_PER_SEC;
    printf("%lfseconds\n",TheTimes);
    return 0;
}