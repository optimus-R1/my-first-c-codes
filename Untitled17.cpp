#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1;
	int num2; 
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	printf("1st answer: %d\n", num1+num2);
	printf("2nd answer: %d\n", num1-num2);
	printf("3rd answer: %d\n", num1*num2);
	printf("4th answer: %d", num1/num2);
	return 0;
}
