

/*
NAME:frankline moni
ADM:PA106/G/28937/25
DESCRIPTION:function that takes the number of units 
consumed and return total bill.
*/

#include<stdio.h>

float CalculateElectricBill(float units){
    if(units<=100){return units*10;}
    else if(units>100 && units<200){return units*15;}
    else if (units>=200){return units*20;}
}



int main(){

    float units;
    printf("Enter number of units consumed:\n");
    scanf("%f",&units);

    float result=CalculateElectricBill(units);
    printf("Total Bill=kshs%.2f",result);


    return 0;
}

