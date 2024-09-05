#include<stdio.h>
int main()
{
	// Calculate the body mass index.
	float Weight_in_Kg, Body_Mass_Index;
	printf("Enter the Weight in Kilogram: ");
	scanf("%g", &Weight_in_Kg);
	
	float Height_in_Meters;
	printf("Enter the Height in Meters: ");
	scanf("%g",&Height_in_Meters);
	
	Body_Mass_Index = (Weight_in_Kg / (Height_in_Meters*Height_in_Meters));
	printf("Your BMI is:  %g",Body_Mass_Index);
	
	return 0;
	
}
