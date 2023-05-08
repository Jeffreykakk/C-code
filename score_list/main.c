#include <stdio.h>
#include <windows.h>
#define student 5
#define course 3

void getscore(int arr[student][course])         //输入学生的成绩
{
    int i=0;
    for(i=0;i<student;i++)
    {
        printf("请输入学生%d的三门成绩\n",i+1);
        int j=0;
        for(j=0;j<course;j++)
        {
            printf("第%d门>: ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}

int cmp(const void* e1,const void *e2)        //排序函数
{
    int average1=0;
    int average2=0;
    int i=0;
    for(i=0;i<course;i++)
    {
        average1+=(*(int*)e1);
        average2+=(*(int*)e1);
    }
    return average1-average2;       //按平均成绩排序
}

void putscore(int arr[student][course])         //打印学生的成绩
{
    int i=0;
    for(i=0;i<student;i++)
    {
        printf("学生%d的三门成绩\n",i+1);
        int j=0;
        for(j=0;j<course;j++)
        printf("%d ",arr[i][j]);
        printf("\n");
    }
}
int main() 
{
	int arr[5][3]={0};
	getscore(arr);
    qsort(arr,student,sizeof(arr[0]),cmp);
    putscore(arr);
    system("pause");
	return 0;
}