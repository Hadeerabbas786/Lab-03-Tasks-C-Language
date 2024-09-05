#include<stdio.h>

int main()
{
	//Convert temperature from Fahrenheit to Celsius.
	float Temp_in_Fahrenheit, Celsius;
	printf("Enter the temperature in Fahrenheit: ");
	scanf("%g",&Temp_in_Fahrenheit);
	Celsius = (Temp_in_Fahrenheit - 32)*0.55;
	printf("Temperature in Celsius: %gC",Celsius);
	return 0;

}

