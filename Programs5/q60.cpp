#include<stdio.h>
int main()
{
	int a[5];
	printf("enter elements of array: \n");
	for(int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("here is your before array: \n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	int i, j, temp, min;
	for( i = 0; i < 5; i++)
	{
		for( j = i+1; j<5; j++)
		{
			min = i;
			if(a[min]>a[j]);
			{
				min = j;
			}
		}
		
		if(a[i]>a[min])
		{
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}	
	}
	printf("\n here is your after array: \n");
	for(int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
}

