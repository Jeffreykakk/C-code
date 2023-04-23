#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_name 20
#define max_sex 10
#define max_tele 12
#define max_addr 30
#define default_sz 3
#define default_increase 2

typedef struct PeoInfo
{
	char name[max_name];
	char sex[max_sex];
	int age;
	char tele[max_tele];
	char addr[max_addr];
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;
	int sz;
	int capacity;
}Contact;

void InitContact(Contact *pc);
void Contact_add(Contact *pc);
void Contact_print(const Contact *pc);
void Contact_delete(Contact *pc);
void Contact_search(const Contact *pc);
void Contact_modify(Contact *pc);
void Contact_sort(Contact *pc);
void Contact_destroy(Contact *pc);