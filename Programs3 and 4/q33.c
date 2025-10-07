#include<stdio.h>
int main()
{
    int i, n, num, max, min;
    printf("enter how many numbers you want: ");
    scanf("%d", &n);


    printf("enter number - ");
    scanf("%d", &num);


    max = num;
    min = num;
   
    for(i=2;i<=n;i++)
    {
        printf("enter number - ");
        scanf("%d", &num);
        if(num>max)
        {
            max = num;
        }
        if(num<min)
        {
            min = num;
        }




    }
    printf("max - %d, min - %d", max, min);
    return 0;
}
