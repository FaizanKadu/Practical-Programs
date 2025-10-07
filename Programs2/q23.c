#include<stdio.h>

int main()
{
int base, power, result, i;
printf("enter the base: ");
scanf("%d", &base);
printf("enter the power: ");
scanf("%d", &power);
result = 1;
i = 0;
while (i < power)
{
result = result*base;
i = i + 1;
}
printf("result is %d", result);
}
