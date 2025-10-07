#include<stdio.h>
int main()
{
    
    int n;
    printf("enter length of pattern: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        char alphabet = 'A';
        for(int j=n-i;j<=n;j++)
        {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
}