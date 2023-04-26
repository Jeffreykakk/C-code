#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BLUE 'B'
#define WHITE 'W'
#define RED 'R'
#define swap(x,y){char temp;temp=color[x];color[x]=color[y];color[y]=temp;}

int main()
{
    char color[]={'R','W','B','W','W','B','R','B','W','R','\0'};
    int w=0,b=0,i=0,r=strlen(color)-1;
    for(i=0;i<strlen(color);i++)
    printf("%c ",color[i]);
    printf("\n");
    while(w<=r)
    {
        if(color[w]==WHITE)
        w++;
        else
        {
            if(color[w]==BLUE)
            {
                swap(b,w);
                b++;
                w++;
            }
            else
            {
                while(w<r&&color[r]==RED)
                r--;
                swap(r,w);
                r--;
            }
        }
    }
    for(i=0;i<strlen(color);i++)
    printf("%c ",color[i]);
    return 0;
}