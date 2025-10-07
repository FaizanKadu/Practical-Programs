#include<stdio.h>
int main()
{
int hr, min, sec, total;
printf("enter hour value: \n");
scanf("%d", &hr);
printf("enter minute value: \n");
scanf("%d", &min);
printf("enter second value: \n");
scanf("%d", &sec);
total = (hr*3600) + (min*60) + sec;
printf("total second value is %d", total);
return 0;
}