#include<stdio.h>

int main()
{
	/*A customer asks the IT firm to develop a program in C language, which can take tax rate and salary from 
the user on runtime and then calculate the tax, the user has to pay and the salary he/she will have after 
paying the tax. This information is then provided to the user.*/

	int Tax_rate,tax;
	int salary,After_Tax_salary;
	printf("Enter the Tax rate: ");
	scanf("%d",&Tax_rate);
	
	printf("Enter the total salary: ");
	scanf("%d",&salary);
	
	tax = salary*Tax_rate/100;
	printf("Tax is: %d\n",tax);
	
	After_Tax_salary = salary - tax;
	printf("After Tax deduction Your Salary is: %d",After_Tax_salary);
	return 0;
}
