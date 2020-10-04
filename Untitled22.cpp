#include<stdio.h>
#include<stdlib.h>
int main()
{
	sayHi("Rudragadha");
	printf("Bottom");
	return 0;
}
void sayHi(char name[]){
	printf("Hello %s", name);
}
