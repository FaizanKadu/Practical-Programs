 #include<stdio.h>
    int main()
    {
        float units, bill;


        printf("enter units consumed: ");
        scanf("%f", &units);


        if (units> 0 && units <=200)
        {
            bill = 0.5*units;
        }
        else if (units> 200 && units <=400)
        {
            bill = 100 + 0.65*(units-200);
        }
        else if (units> 400 && units <=600)
        {
            bill = 230 + 0.8*(400-units);
        }
        else if (units> 600)
        {
            bill = 425 + 1.25*(600-units);
        }
        printf("your total bill - %f", bill);
        return 0;
    }
