#include<cstdio>

int main( void ){
	struct Employee{
		char name[30];
		int empid;
		float salary;
	};
	
	struct Employee emp;
	struct Employee *ptr = &emp;
	
	printf("Name :");
	scanf("%s",ptr->name);
	printf("empid :");
	scanf("%d",&ptr->empid);
	printf("salary :");
	scanf("%f",&ptr->salary);
	
	printf("Name : %s\n", ptr->name);
	printf("Empid : %d\n", ptr->empid);
	printf("Salary : %f\n", ptr->salary);
	return 0;
}