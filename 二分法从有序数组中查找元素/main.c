#include <stdio.h>

int main()
{
    char ch[]={1,2,3,4,5,6,7,8,9,10};
    int k;
    printf(" find  number>: ");
    scanf("%d",&k);
    int sz=sizeof(ch)/sizeof(ch[0]);
    int left=0,right=sz-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
     if(ch[mid]>k)
     right=mid-1;
     else if(ch[mid]<k)
     left=mid+1;
        else
        {
            printf("over\tindex:%d\n",mid);
            break;
        }
 }
 if(left>right)
    printf("nothing\n");
    return 0;
}