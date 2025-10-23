/*
NAME:frankline moni
ADM:PA106/G/28937/25
DESCRIPTION:function to convert fahrenheit to degree celcius*/


#include<stdio.h>

float convertToCelcius(float f){
    float c=(f-32)*5/9;
    return c;
}


int main(){

    float f;

    printf("ENTER the fahrenheit\n");
    scanf("%f",&f);

    float result=convertToCelcius(f);

    printf("=%.2f degree celcius",result);

    return 0;
}