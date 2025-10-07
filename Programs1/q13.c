#include<stdio.h>
int main()
{
int n;
printf("enter value to check if its odd or even \n");
scanf("%d", &n);
if (n <= 0)
printf("invalid input");
else if (n%2 == 0)
printf("input is even");
else
printf("input is odd");
return 0;
}