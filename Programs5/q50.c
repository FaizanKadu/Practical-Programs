#include<stdio.h>
int main()
{
    
    int n;
    char alphabet = 'A';
    printf("enter length of pattern: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {

        for(int j = 1; j <=i; j++)
        {
            printf("%c", alphabet);
        }
        printf("\n");
        alphabet++;
    }
}