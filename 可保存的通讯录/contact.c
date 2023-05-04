#include "contact.h"

int sort_name(const void* e1,const void* e2)
{
	return strcmp(((PeoInfo*)e1)->name,((PeoInfo*)e2)->name);
}

int sort_age(const void* e1,const void* e2)
{
	return ((PeoInfo*)e1)->age-((PeoInfo*)e2)->age;
}

int find_name(const Contact *pc,const char* name_delete)
{
	int i=0;
	for(i=0;i<pc->sz;i++)
	{
		if(strcmp(pc->data[i].name,name_delete)==0)
		return i;
	}
	return -1;
}

void InitContact(Contact* pc)
{
	pc->sz=0;
	pc->data=(PeoInfo*)malloc(default_sz*sizeof(PeoInfo));
	pc->capacity=default_sz;
}

void Contact_load(Contact *pc)
{
	FILE* pf=fopen("mycontact.txt","r");
	if(pf==NULL)
	{
		perror("Contact_load");
		return;
	}
	PeoInfo tmp={0};
	while(fread(&tmp,sizeof(PeoInfo),1,pf))
	{
		check_capacity(pc);
		pc->data[pc->sz]=tmp;
		pc->sz++;
	}
	fclose(pf);
	pf=NULL;
}

void check_capacity(Contact *pc)
{
	if(pc->sz==pc->capacity)
	{
		printf("full\n");
		PeoInfo* ptr=realloc(pc->data,(pc->capacity+default_increase)*sizeof(PeoInfo));
		if(ptr==NULL)
		{
			perror("Contact_add");
			printf("fail to increase the capacity\n");
		}
		else
		{
			printf("success to increase the capacity\n");
			pc->data=ptr;
			pc->capacity+=default_increase;
		}
	}
}

void Contact_destroy(Contact *pc)
{
	free(pc->data);
	pc->data=NULL;
	pc->capacity=0;
	pc->sz=0;
}

void Contact_add(Contact *pc)
{
	check_capacity(pc);
	printf("name:");
	scanf("%s",pc->data[pc->sz].name);
	printf("sex:");
	scanf("%s",pc->data[pc->sz].sex);
	printf("age:");
	scanf("%d",&pc->data[pc->sz].age);
	printf("tele:");
	scanf("%s",pc->data[pc->sz].tele);
	printf("addr:");
	scanf("%s",pc->data[pc->sz].addr);
	pc->sz++;
	printf("success to add\n");
}

void Contact_print(const Contact *pc)
{
	int i=0;
	printf("%-10s\t%-8s\t%-3s\t%-15s\t%-15s\n","name","sex","age","tele","addr");
	for(i=0;i<pc->sz;i++)
	{
		printf("%-10s\t%-10s\t%-5d\t%-15s\t%-15s\n",
		pc->data[i].name,
		pc->data[i].sex,
		pc->data[i].age,
		pc->data[i].tele,
		pc->data[i].addr);
	}
}

void Contact_delete(Contact *pc)
{
	if(pc->sz==0)
	{
		printf("empty,fail to delete");
		return;
	}
	printf("name you want to delete:");
	char name_delete[20];
	scanf("%s",name_delete);
	int index=find_name(pc,name_delete);
	if(index==-1)
	{
		printf("do not exist\n");
		return;
	}
	int i=0;
	for(i=index;i<(pc->sz)-1;i++)
	pc->data[i]=pc->data[i+1];
	pc->sz--;
	printf("success to delete\n");
}

void Contact_search(const Contact *pc)
{
	printf("name you want to search:");
	char name_search[20];
	scanf("%s",name_search);
	int ret=find_name(pc,name_search);
	if(ret==-1)
	printf("do not exist");
	else
	{
		printf("%-10s\t%-8s\t%-3s\t%-15s\t%-15s\n","name","sex","age","tele","addr");
		printf("%-10s\t%-10s\t%-5d\t%-15s\t%-15s\n",
				pc->data[ret].name,
				pc->data[ret].sex,
				pc->data[ret].age,
				pc->data[ret].tele,
				pc->data[ret].addr);
	}
}

void Contact_modify(Contact *pc)
{
	printf("name you want to modify:");
	char name_search[20];
	scanf("%s",name_search);
	int ret=find_name(pc,name_search);
	if(ret==-1)
	printf("do not exist");
	else
	{
		printf("name:");
		scanf("%s",pc->data[ret].name);
		printf("sex:");
		scanf("%s",pc->data[ret].sex);
		printf("age:");
		scanf("%d",&pc->data[ret].age);
		printf("tele:");
		scanf("%s",pc->data[ret].tele);
		printf("addr:");
		scanf("%s",pc->data[ret].addr);
		printf("success to modify\n");
	}
}

void Contact_sort(Contact *pc)
{
	int input=0;
	printf("sort by name:0\n");
	printf("sort by age:1\n");
	printf("choose :");
	scanf("%d",&input);
	if(input==0)
	qsort(pc->data,pc->sz,sizeof(pc->data[0]),sort_name);
	else
	qsort(pc->data,pc->sz,sizeof(pc->data[0]),sort_age);
	printf("success to sort\n");
}

void Contact_save(Contact *pc)
{
	FILE* pf=fopen("mycontact.txt","w");
	if(pf==NULL)
	{
		perror("Contact_save");
		return;
	}
	int i=0;
	for(i=0;i<pc->sz;i++)
	fwrite((pc->data)+i,sizeof(PeoInfo),1,pf);
	fclose(pf);
	pf=NULL;
}