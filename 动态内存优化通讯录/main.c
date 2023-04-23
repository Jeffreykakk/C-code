#include "contact.h"

void menu()
{
	printf("\n");
	printf("**********************************\n");
	printf("******* 1.add    2.delete ********\n");
	printf("******* 3.search 4.modify ********\n");	
	printf("******* 5.sort   6.print  ********\n");
	printf("***********   0.exit  ************\n");
}


int main() 
{	
	int input=0;
	Contact con;
	InitContact(&con);
	do
	{	
		menu();
		printf("choose : ");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				Contact_add(&con);
				break;
			case 2:
				Contact_delete(&con);
				break;
			case 3:
				Contact_search(&con);
				break;
			case 4:
				Contact_modify(&con);
				break;
			case 5:
				Contact_sort(&con);
				break;
			case 6:
				Contact_print(&con);
				break;
			case 0:
				printf("exit!\n");
				Contact_destroy(&con);
				break;
			default:
				printf("input error!\n");
				break;
		}
	}while(input);
	return 0;
}