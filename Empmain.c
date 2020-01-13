#include<stdio.h>
#include "Emp.h"
#include<string.h>

int main()
{
	Employee *ePtr = (Employee *)malloc(sizeof(Employee)*100);
	for (int i = 0; i < 100; i++)
	{
		ePtr[i].id =-1 ;
		strcpy_s( ePtr[i].name, sizeof(ePtr[i].name),"" );
		ePtr[i].salary = -1;
	}

	for(int i=0;i<3;i++)
		acceptData(&ePtr[i]);
	for (int i = 0; i < 3; i++)
		displayData(&ePtr[i]);

	//searchData(ePtr);
	//countData(ePtr);
	updateData(ePtr);
	for (int i = 0; i < 3; i++)
		displayData(&ePtr[i]);
	return 0;
}