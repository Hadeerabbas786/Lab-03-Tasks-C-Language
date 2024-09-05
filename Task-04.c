#include<stdio.h>

int main()
{
	int distance = 1207, Fuel_Average;
	printf("Enter the Fuel Average: ");
	scanf("%d",&Fuel_Average);
	printf("\nThe Fuel Average is %d: ",Fuel_Average);
	
	float Total_Distance, Total_Fuel_Cost, Total_Fuel_Consumed;
	int Fuel_Price_Forward = 280;
	int Fuel_Price_Return = 275;
	
	Total_Distance = 2 * distance;
	printf("\nThe total Distance is: %g",Total_Distance);
	
	Total_Fuel_Consumed = Total_Distance / Fuel_Average;
	printf("\nThe total Fuel Consumed is: %g",Total_Fuel_Consumed);
	
	Total_Fuel_Cost = ((distance / Fuel_Average) * Fuel_Price_Forward ) + ((distance / Fuel_Average) * Fuel_Price_Return);
	printf("\nThe total Fuel Cost is: %g",Total_Fuel_Cost);
	return 0;
	

}
