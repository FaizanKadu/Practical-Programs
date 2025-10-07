#include<stdio.h>
    int main()
    {
        int i, num;


        printf("enter a number: ");
        scanf("%d", &num);


        for(i=2; i<=num; i++)
        {
            if(num % i==0)
            {
                printf("%d \t", i);
               
            }
        }




        return 0;
    }
