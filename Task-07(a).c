#include<stdio.h>

int main()
{
	//Convert temperature from Celsius to Fahrenheit.
	float Temp_in_Celsius, Fahrenheit;
	printf("Enter the temperature in Celsius: ");
	scanf("%g",&Temp_in_Celsius);
	Fahrenheit = ((Temp_in_Celsius*9)/5) + 32;
	printf("Temperature in Fahrenheit: %gF",Fahrenheit);
	return 0;

}

