#include <stdio.h>
#include <windows.h>
#include <unistd.h>
#include <string.h>

int main()
{
    char bar[102] = {0};
    int i = 0;
    for (i = 0; i < 101; i++)
    {
        printf("[%-100s][%d%%]\r", bar, i);
        fflush(stdout);
        usleep(50000);
        bar[i] = '*';
    }
    printf("\n");
    system("pause");
    return 0;
}
