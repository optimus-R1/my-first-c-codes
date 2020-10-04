#include<stdio.h>
#include<stdlib.h>
int main()
{
	int luckyNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	luckyNumbers[1] = 200;
	printf("%d", luckyNumbers[1]);
	return 0;
}
