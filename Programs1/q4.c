#include<stdio.h>
int main()
{
float farenhiet, centigrade;
printf("enter temperature in farenhiet: \n");
scanf("%f", &farenhiet);
centigrade = (farenhiet - 32)*5.0/9;
printf("your final answer is: %f", centigrade);
return 0;
}