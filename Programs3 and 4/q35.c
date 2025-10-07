 #include<stdio.h>
    int main()
    {
        int n, sum = 0, last, temp, num, d = 0;
        printf("enter a number: ");
        scanf("%d", &n);


        num = n;


        while(n>0)
        {
            last = n%10;
            sum = sum + last;
            n = n/10;
            d++;


        }
        while(sum > 9)
        {
        int temp = sum;
        sum = 0;
        while(temp > 0)
            {
                last = temp % 10;
                sum = sum + last;
                temp = temp / 10;
            }
        }
        printf("num of digits: %d", d);
        printf("sum is %d", sum);




       
    }
