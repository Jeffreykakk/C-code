#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	srand((unsigned)time(NULL));
	int question=0,count=0,right=0;
	while(count<10)
	{
		question=rand()%4+1;
		int num1=rand()%100+1,num2=rand()%100+1,answer=0;
		switch(question)
		{
			case 1:
				count++;
				printf("%d+%d= \nanwser: ",num1,num2);
				scanf("%d",&answer);
				if(answer==num1+num2)
				{	
					right++;
					printf("right answer!  accuracy=%2.1f%%\n",right*1.0/count*100);	
				}
				else
				printf("right answer is %d  accuracy=%2.1f%%\n",num1+num2,right*1.0/count*100);
				break;
			case 2:
				count++;
				printf("%d-%d= \nanwser: ",num1,num2);
				scanf("%d",&answer);
				if(answer==num1-num2)
				{	
					right++;
					printf("right answer!  accuracy=%2.1f%%\n",right*1.0/count*100);	
				}
				else
				printf("right answer is %d  accuracy=%2.1f%%\n",num1-num2,right*1.0/count*100);
				break;
			case 3:
				count++;
				printf("%d*%d= \nanwser: ",num1,num2);
				scanf("%d",&answer);
				if(answer==num1*num2)
				{	
					right++;
					printf("right answer!  accuracy=%2.1f%%\n",right*1.0/count*100);	
				}
				else
				printf("right answer is %d  accuracy=%2.1f%%\n",num1*num2,right*1.0/count*100);
				break;
			case 4:
				count++;
				printf("%d/%d= \nanwser: ",num1,num2);
				scanf("%d",&answer);
				if(answer==num1/num2)
				{	
					right++;
					printf("right answer!  accuracy=%2.1f%%\n",right*1.0/count*100);	
				}
				else
				printf("right answer is %d  accuracy=%2.1f%%\n",num1/num2,right*1.0/count*100);
				break;
		}
	}
	return 0;
}