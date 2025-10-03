/*
name:frankline moni
PA106/G/28937/25
DESCRIPTION:checking exam eligibility
*/



#include<stdio.h>

main(){

    int a,b;

    printf("Enter percentage attendance:");
    scanf("%d",&a);

    printf("Enter Average marks scored:");
    scanf("%d",&b);
if (a>=70 && b>=40){
    printf("eligible for exams");

}
else {
printf("ineligible");
}

    return 0;
}