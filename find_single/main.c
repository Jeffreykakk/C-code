#include <stdio.h>
#include <windows.h>

//一组数据，除了两个数只出现了一次，其它数都出现了两次，找出只出现一次的两个数

void find(int arr[],int sz)
{
    int i=0,num=0,pos=0;
    for(i=0;i<sz;i++)
    {
        num^=arr[i];                //将所有数异或，因为相同数异或为0，所以num的值为只出现一次的两数相异或的值
    }
    for(i=0;i<32;i++)
    {
        if((num>>i)&1==1)           //找出num二进制位为1的位，即只出现一次两数二进制位不同的位
        {
            pos=i;
            break;
        }
    }
    int single1=0;
    int single2=0;
    for(i=0;i<sz;i++)               //通过只出现一次数字相异的位将数分出两组
    {
        if(arr[i]>>pos&1==1)        //把每一组的数全异或在一起，即可找出只出现一次的数
        single1^=arr[i];
        else
        single2^=arr[i];
    }
    printf("single1 = %d\n",single1);
    printf("single2 = %d\n",single2);
}

int main()
{
    int arr[]={1,1,2,2,3,3,4,4,5,5,6,7};
    int sz=sizeof(arr)/sizeof(arr[0]);
    find(arr,sz);
    system("pause");
    return 0;
}