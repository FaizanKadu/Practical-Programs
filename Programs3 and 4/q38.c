#include<stdio.h>
    int main()
    {
        int i, j, n, d = 1;
        printf("enter upper limit: ");
        scanf("%d", &n);


        for(i=1;i*i<=n;i++)
        {  
            j = i * i;
            printf("%d \t", j);
        }
        return 0;
    }
