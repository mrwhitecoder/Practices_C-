#include<cstdio>

int main(void){
	struct Employee{
		char name[ 30 ];
		int empid;
		float salary;
	};
	
	struct Employee emp;
	
	printf("Name : ");
	scanf("%s",emp.name);
	printf("Empid : ");
	scanf("%d", &emp.empid);
	printf("Salary : ");
	scanf("%f", &emp.salary);
	
	printf("Name : %s\n", emp.name);
	printf("Empid : %d\n", emp.empid);
	printf("Salary : %f\n", emp.salary);
}