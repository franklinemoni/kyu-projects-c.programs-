/*
NAME:frankline osano moni
ADM:PA106/G/28937/25
DESCRIPTION:program to prompt user to enter and display their 
            height
            id no 
            bank balance
*/

#include<stdio.h>

main(){
	
	float a,b,c;
	
	printf("Enter height:");
	scanf("%f",&a);
	
	printf("Enter ID no:");
	scanf("%f",&b);
	
	printf("Enter bank balance: ksh	");
	scanf("%f",&c);
	 
	 printf("\nHeight is %.1fcm",a);
	 printf("\nID is %.0f",b);
	 printf("\nbank balanc is ksh%.2f",c);
	
	
	
	
	
	
	return 0;
}

