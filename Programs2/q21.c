#include<stdio.h>
int main()
{
char operation;
float result, n1, n2;
printf("enter + for add, - for subtract, * for multiplying and / for division.");

scanf("%c", &operation);
printf("enter first operand: ");
scanf("%f", &n1);
printf("enter second operand: ");
scanf("%f", &n2);
switch (operation)
{
case '+':
result = n1 + n2;
break;
case '-':
result = n1 - n2;
break;
case '*':
result = n1 * n2;
break;
case '/':
result = n1 / n2;
break;
default:
printf("invalid.");

}
printf("your result is %f", result);
return 0;
}