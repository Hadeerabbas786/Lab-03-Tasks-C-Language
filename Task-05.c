#include<stdio.h>

int main()
{
	float principle,Rate_of_interest,Time_Period,Simple_Interest;
	printf("Enter the Value of Principle'between 100Rs To 1,000,000Rs': ");
	scanf("%g",&principle);
	
	printf("Enter the Rate of Interst 'between 5 Percentage To 10 Percentage': ");
	scanf("%f",&Rate_of_interest);
	
	printf("Enter the Time Period 'between 1 To 10 years': ");
	scanf("%g",&Time_Period);
	
	Simple_Interest = ((principle * Rate_of_interest * Time_Period)/100);
	
	printf("Simple Interest is: %g",Simple_Interest);
	return 0;
	
}
