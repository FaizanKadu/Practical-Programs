#include<stdio.h>
int main()
{
int operation;
float result, n1, n2;
printf("enter 1 for add, 2 for subtract, 3 for multiplying and 4 for division.");
scanf("%d", &operation);
printf("enter first operand: ");
scanf("%f", &n1);
printf("enter second operand: ");
scanf("%f", &n2);

switch (operation)
{
case 1:
result = n1 + n2;
break;
case 2:
result = n1 - n2;
break;
case 3:
result = n1 * n2;
break;
case 4:
result = n1 / n2;
break;
default:
printf("invalid.");

}
printf("your result is %f", result);
return 0;
}