 #include<stdio.h>
    int main()
    {
        float com, sales;


        printf("enter sales value in rupees: ");
        scanf("%f", &sales);


        if(sales<=500)
        {
            com = sales*(5/100.0);
        }
        else if(sales>500 && sales<=2000)
        {
            com = (sales-500)*(10/100.0) + 35;
        }
        else if(sales>2000 && sales<=5000)
        {
            com = 185 + (sales-2000)*(12/100.0);
        }
        else if(sales>5000)
        {
            com = (12.5/100)*sales;
        }
        else
        {
            return 0;
        }
        printf("%f rupees, is your commision.", com);
        return 0;
    }
