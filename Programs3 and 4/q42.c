#include<stdio.h>
    int main()
    {
        int i, num, flag = 0;


        printf("enter a number: ");
        scanf("%d", &num);


        for(i=2; i<num; i++)
        {
            if(num % i==0)
            {
                flag = 1;
            }
        }


        if(flag == 1)
        {
            printf("number is composite");
        }
        else
        {
            printf("number is prime");
        }


        return 0;
    }
