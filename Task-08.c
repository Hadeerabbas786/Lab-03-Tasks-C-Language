#include<stdio.h>

int main(){
	//Convert a distance from kilometers to miles.
	float Kilometers,miles;
	printf("Enter the distance in Kilometers: ");
	scanf("%g",&Kilometers);
	miles = Kilometers*0.621371;
	printf("A distance in mile are: %g Miles",miles);
	return 0;
}
