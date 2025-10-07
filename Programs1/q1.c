#include<stdio.h>
int main()
{
int final, interest, p, r, t;
printf("enter principle amount: ");
scanf("%d", &p);
printf("enter rate as percentage: ");
scanf("%d", &r);
printf("enter time: ");
scanf("%d", &t);
interest = (p*r*t)/100;
final = p + interest;
printf("your interest gain is %d and final amount in total is %d", interest, final);
return 0;
}