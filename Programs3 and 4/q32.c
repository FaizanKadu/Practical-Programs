#include<stdio.h>
int main()
{
    int i, n, num, max1 = 0, max2 = 0;
    printf("enter how many numbers you want: ");
    scanf("%d", &n);
   
    for(i=1;i<=n;i++)
    {
        printf("enter number - ");
        scanf("%d", &num);
        if(num>max1)
        {
            max2 = max1;
            max1 = num;
        }
        else if (num>max2 && num != max1)
        {
            max2 = num;
        }
    }
    printf("max - %d, second max - %d", max1, max2);
    return 0;
}
