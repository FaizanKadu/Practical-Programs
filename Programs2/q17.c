#include<stdio.h>
int main()
{
float a,b,c;
printf("enter first number: \n");
scanf("%f", &a);
printf("enter second number: \n");
scanf("%f", &b);
printf("enter third number: \n");
scanf("%f", &c);
if (a>b && a>c)

printf("a, %f is the greatest number", a);

else if (b>c && b>a)

printf("b, %f is the greatest number", b);

else
printf("c, %f is the greatest number", c);
return 0;
}