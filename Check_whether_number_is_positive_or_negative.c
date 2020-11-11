
#include<stdio.h>
int main()
{
 int n;
 printf("Enter number..");
 scanf("%d",&n);
 if(n>0)
	printf("Given number is positive");
 else if(n<0)
	printf("Given number is negative");
 else
	printf("Number is Zero");
}