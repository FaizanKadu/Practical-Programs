#include<stdio.h>
int main()
{
int a,b,c;
printf("enter first value: \n");
scanf("%d", &a);
printf("enter second value: \n");
scanf("%d", &b);
printf("before, your first value is %d and second value is %d \n", a,b);
c = a;
b = a;
a = c;
printf("after, your first value is %d and second value is %d", a,b);
return 0;

}