#include<stdio.h>
#include "Emp.h"

void acceptData(Employee *s)
{
	printf("\nEnter the name of employee :");
	scanf_s("%s", s->name,sizeof(s->name) );
	printf("\nEnter the id of employee :");
	scanf_s("%d", &s->id);
	printf("\nEnter the salary of employee :");
	scanf_s("%f", &s->salary);

}

void displayData(Employee *s)
{
	printf("\nName : %s", s->name);
	printf("\nID : %d", s->id);
	printf("\nSalary : %f", s->salary);
	printf("\n");
}

void searchData(Employee *s)
{
	int lid;
	printf("\nEnter the ID of the Employee for which name is to be searched :");
	scanf_s("%d",&lid );

	for (int i = 0; i < 3; i++)
	{
		if (lid == s[i].id)
		{
			printf("\nName of the Employee is : %s",s[i].name);
		}
	}
}

void countData(Employee *s)
{
	int cnt = 0;
	for (int i = 0; i < 100; i++)
	{
		if (s[i].id != -1)
		{
			cnt++;
		}
	}
	printf("\nThe Total No. of Employees are : %d",cnt);

}
void updateData(Employee *s)
{
	int lid;
	printf("\nEnter the id of the employe for which modification of salary to be performed : ");
	scanf_s("%d", &lid);

	for (int i = 0; i < 100; i++)
	{
		if (s[i].id ==lid)
		{
			printf("\nEnter new salary : ");
			scanf_s("%f", &s[i].salary);
			printf("\nSalary updated Successfully");
		}
	}

}
void DeleteData(Employee *s)
{

}

void FreeData(Employee *s)
{

}