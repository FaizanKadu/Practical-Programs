#include<stdio.h>
#include <stdlib.h>
int main()
{
	int n, t, rnum;
	rnum = rand();
	printf("enter how many guesses: ");
	scanf("%d", &t);
	
	for(int i = 0; i<t; i++)
	{
		printf("enter a guess: ");
		scanf("%d", &n);
		if(n == rnum)
		{
			printf("RIGHT ANSWER!");
			break;
		}
		else
		{
			printf("WRONG ANSWER!")
		}
		printf("\n");
	}
	
}
