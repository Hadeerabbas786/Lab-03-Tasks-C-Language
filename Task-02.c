#include<stdio.h>

int main()
{
	/*Write a C program that takes two integer values as input from the user. Then swap the values taken from 
the user and display the output of the variables*/
	int a;
	int b,c;
	printf("Enter the Value of a: " );
	scanf("%d", &a);
	printf("Enter the Value of b: " );
	scanf("%d", &b);
    c=a;
    a=b;
    b=c;
   
   printf("You enter two value %d and %d", a, b);
   return 0;
}
