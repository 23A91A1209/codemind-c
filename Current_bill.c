#include<stdio.h>
int main()
{
    int units;
    float amount,total_amount,surcharge = 0;
    scanf("%d", &units);
    if(units<=199){
        amount = units*1.20;
    }
    else if(units>200&&units<=400)
    {
        amount = units*1.50;
    }
    else if(units>=400&&units<600)
    {
        amount = units*1.80;
    }
    else{
        amount = units*2.00;
    }
    if(amount>400){
        surcharge = amount *0.15;
    }
    if(amount<400){
        surcharge = 100;
    }
    total_amount = amount +surcharge;
    printf("%.2f", total_amount);
}