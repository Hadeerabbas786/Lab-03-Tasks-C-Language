#include<stdio.h>

int main()
{
	/*Construct a C program where you calculate the slope of two point (5,4), (3,2). Use format specifiers to 
cap the result to 3 decimal places.*/

	int X1 = 5.000;
	int X2 = 3.000;
	int Y1 = 4.000;
	int Y2 = 2.000;
	float slope;
	slope = (Y2 - Y1)/(X2 - X1);
	printf("The Slope is equal to: %.3f",slope);
	return 0;
}

