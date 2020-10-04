#include<stdio.h>
#include<stdlib.h>
int main()
{
	sayHi("Rudra gadha", 100);
	sayHi("Rudra chagol", 200);
	sayHi("Rudra honuman", 300);
	printf("Bottom");
	return 0;
}
void sayHi(char name[]){
	printf("Hello %s, you are%d\n", name, age);
}
