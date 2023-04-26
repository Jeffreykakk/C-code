#include <stdio.h>

int main()
{
    int score[4][4]={0};
    int i=0,j=0,k=0,who=0;
    score[1][1]=7;
    score[2][1]=8;
    score[3][1]=9;
    for(i=4;i<6;i++)
        for(j=4;j<7;j++)
            for(k=4;i!=j&&k<7;k++)
                if(k!=i&&k!=j&&15-i-score[1][1]!=15-j-score[2][1]
                             &&15-i-score[1][1]!=15-k-score[3][1]
                             &&15-j-score[2][1]!=15-k-score[3][1])
                {
                    score[1][2]=i;score[1][3]=15-i-7;
                    score[2][2]=j;score[2][3]=15-j-8;
                    score[3][2]=k;score[3][3]=15-k-9;
                }
                for(who=0,i=1;i<=3;i++,printf("\n"))
                    for(j=1;j<=3;j++)
                    {
                        printf("%d ",score[i][j]);
                        if(score[i][j]==1)
                            who=i;
                    }
                    if(who==1)
                        printf("the last:zhang\n");
                    else if(who==2)
                        printf("the last:wang\n");
                    else
                        printf("the last:li\n");
                    return 0;
}