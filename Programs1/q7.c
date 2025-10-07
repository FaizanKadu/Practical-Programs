#include<stdio.h>
int main()

{
float base, height, area;
printf("enter base value of triangle in cm: \n");
scanf("%f", &base);
printf("enter height value of tirangle in cm: \n");
scanf("%f", &height);
area = 0.5*base*height;
printf("area of your triangle is %f cm square", area);
return 0;
}