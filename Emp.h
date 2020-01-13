#pragma once
#include<stdio.h>

typedef struct Employee
{
	int id;
	char name[10];
	float salary;
}Employee;

void acceptData(Employee *e );
void displayData(Employee *e  );
void searchData(Employee *e);
void countData(Employee *e);
void updateData(Employee *e);
void DeleteData(Employee *e);
void FreeData(Employee *e);