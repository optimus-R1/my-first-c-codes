#include<stdio.h>
#include<stdlib.h>
int main()
{
	char celebrityF[20];
	char celebrityL[20];
	char behavior[20];
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityF, celebrityL);
	printf("Enter a behavior: ");
	scanf("%s", behavior);
	printf("%s %s is my brother\n", celebrityF, celebrityL);
	printf("His behavior with me is so %s", behavior);
	return 0;
}
