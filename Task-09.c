#include<stdio.h>

int main()
{
	//Calculate the perimeter of a rectangle.
	int Length;
	int Width;
	printf("Enter the value of length: ");
	scanf("%d",&Length);
	printf("Enter the value of Width: ");
	scanf("%d",&Width);
	int Perimeter_of_rectangle = 2*(Length+Width);
	printf("the perimeter of a rectangle is: %d",Perimeter_of_rectangle);
	
	return 0;
	
}
