#include<stdio.h>
int main()
{
int eng, cs, math, chem, phy, total;
printf("enter marks in english out of 100: ");
scanf("%d", &eng);
printf("enter marks in computer out of 100: ");
scanf("%d", &cs);
printf("enter marks in math out of 100: ");

scanf("%d", &math);
printf("enter marks in chemistry out of 100: ");
scanf("%d", &chem);
printf("enter marks in physics out of 100: ");
scanf("%d", &phy);
total = eng + cs + math + chem + phy;
float percentage;
percentage = total/5.0;
printf("total marks are %d and percentage is %f", total, percentage);
return 0;
}