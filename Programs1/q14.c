#include <stdio.h>
#include<ctype.h>
int main()
{
char check;
printf("enter a character: \n");
scanf("%c", &check);
if (isalpha(check))
if (isupper(check))
printf("character is upper case.");
else
printf("character is lower case.");
else if (isdigit(check))
printf("character is a digit.");
else
printf("character is symbol.");
return 0;
}