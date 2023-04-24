#include <stdio.h>

int judge_last(int arr[],int n,int *p_index)
{
	int sum=0,i=0;
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum==1)
		{
			if(arr[i]==1)
			*p_index=i;
			else;
		}
		if(sum>1)
		break;
	}
	if(sum==1)
	return 1;
	else
	return 0;
}

int main() 
{
	int n=0,lim=0,index=0,i=0,k=0;
	scanf("%d %d",&n,&lim);
	int arr[n];
	for(i=0;i<n;i++)
	arr[i]=1;
	for(i=0;i<n;i++)
	{
		if(judge_last(arr,n,&index)==1)
		break;
		if(arr[i])
		{
			k++;
			if(k%lim==0)
			{
				printf("%d ",i+1);
				arr[i]=0;
			}
		}
		if(i==n-1)
		i=-1;
	}
	printf("%d",index+1);
	return 0;
}
