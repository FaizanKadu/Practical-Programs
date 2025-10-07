#include<stdio.h>
int main()
{
    
    int n;
    printf("enter length of pattern: ");
    scanf("%d", &n);
    for(int i = 1; i<=n;i++)
    {
        for(int j = n-i; j >= 1;j--)
        {
            printf("_");
        }
        for(int j = 1; j <=i;j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}