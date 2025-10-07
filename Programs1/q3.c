#include<stdio.h>
int main()
{
float inhand, hra, da, gross;
printf("enter your in-hand salary: \n");
scanf("%f", &inhand);
hra = inhand/10.0;
da = (inhand*15.0) / 100;
gross = inhand + hra + da;
printf("your gross ctc is: %f", gross);
return 0;
}