#include<stdio.h>
    int main()
    {
        int sum = 0, num;


        printf("enter a number: ");
        scanf("%d", &num);
        while(num>=0)
        {
            sum = sum + num;
            printf("enter a number: ");
            scanf("%d", &num);
        }
        printf("sum is: %d", sum);


        return 0;
    }
