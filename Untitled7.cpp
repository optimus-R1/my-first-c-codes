#include<stdio.h>
#include<stdlib.h>
int main()
{ 
 int nums[10];
 nums[0]=5;
 nums[3]=2;	
 nums[9]=3;
 printf("%d,%d,%d\n", nums[0], nums[3], nums[9]);
 printf("(Garbage):%d%d%d\n\n", 
 nums[1], nums[4], nums[7]);
 printf("Warning:\n");
 nums[10]=9;
 return 0;
}
