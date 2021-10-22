#include <stdio.h>

struct emp {int empno;
	char empname[20];
	char deptname[20];
	int salary;
	} e[20];
void adddetails(void);
void displaydetails(void);
main()
{
	adddetails();
	displaydetails();	
}

void adddetails()
{
	int i;
	printf("\nEnter details:\n");
	for(i=0;i<20;i++)
	{
		printf("Enter employee number\n");
		scanf("%d",&(e[i].empno));
		printf("Enter employee name\n");
		scanf("%s",&(e[i].empname));
		printf("Enter department name\n");
		scanf("%s",&(e[i].deptname));
		printf("Enter employee's salary\n");
		scanf("%d",&(e[i].salary));
	}
		
}
void displaydetails()
{
	int i;
	for(i=0;i<20;i++)
	{
	printf("%d ",e[i].empno);
	printf("%s ",e[i].empname);
	printf("%s ",e[i].deptname);
	printf("%d \n",e[i].salary);
	}
}
