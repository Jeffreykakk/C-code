#include <stdio.h>

int main()
{
    int matrix[10][10]={0};
    int num=1,i=0,j=-1,n=0,count=0;
    scanf("%d",&n);
    int direction=0;    //方向
    while(count<n*n)
    {
        if(direction==0)        //右
        {
            j++;
            while(1)
            {
                if(j==n)
                {
                    j--;
                    break;
                }
                if(j<n&&matrix[i][j]==0)
                {
                    matrix[i][j]=num;
                    num++;
                    count++;
                    j++;
                }
                else
                {
                    j--;
                    break;
                }
            }
        }
        else if(direction==1)   //下
        {
            i++;
            while(1)
            {
                if(i==n)
                {
                    i--;
                    break;
                }
                if(i<n&&matrix[i][j]==0)
                {
                    matrix[i][j]=num;
                    num++;
                    count++;
                    i++;
                }
                else
                {
                    i--;
                    break;
                }
            }
        }
        else if(direction==2)   //左
        {
            j--;
            while(1)
            {
                if(j==-1)
                {
                    j++;
                    break;
                }
                if(j>=0&&matrix[i][j]==0)
                {
                    matrix[i][j]=num;
                    num++;
                    count++;
                    j--;
                }
                else
                {
                    j++;
                    break;
                }
            }
        }
        else                    //上
        {
            i--;
            while(1)
            {
                if(i>=0&&matrix[i][j]==0)
                {
                    matrix[i][j]=num;
                    num++;
                    count++;
                    i--;
                }
                else
                {
                    i++;
                    break;
                }
            }
        }
        direction=(direction+1)%4;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%3d ",matrix[i][j]);
        printf("\n");
    }
    return 0;
}