#include<stdio.h>
int main()
{
int period = 31558150;
int days = 31558150 / 86400;
int remaining_seconds = 31558150 % 86400;
int hours = remaining_seconds / 3600;
remaining_seconds = remaining_seconds % 3600;
int minutes = 31558150 % 60;
printf("converted time is %d days, %d hours and %d minutes." , days, hours, minutes);
return 0;
}