#include<stdio.h>
int main()
{
int yoursec,sec,min,hour;
printf("enter seconds to convert into time: \n");
scanf("%d", &yoursec);
hour = yoursec / 3600;
min = ( yoursec % 3600 ) / 60;
sec = yoursec % 60;
printf("your time in time format is: %d:%d:%d", hour, min, sec);
return 0;
}