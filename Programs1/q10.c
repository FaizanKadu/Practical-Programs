#include<stdio.h>
int main()
{
int M, P, C, E;
printf("enter marks in math out of 200: \n");
scanf("%d", &M);
printf("enter marks in physics out of 200: \n");
scanf("%d", &P);
printf("enter marks in chemistry out of 200: \n");
scanf("%d", &C);
printf("enter marks in entrance exam out of 100: \n");
scanf("%d", &E);

float CM;
CM = M/2.0 + P/2.0 + C/2.0 + E;
printf("your cut-off marks are %f", CM);
return 0;
}