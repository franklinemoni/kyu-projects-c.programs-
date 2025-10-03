/*
name:frankline moni
ADM:PA106/G/28937/25
DATE:20/09/2025
DESCRIPTION:prompting user to enter age and income with conditions if above 
             18yrs and have have income of 21000 annually
*/

#include<stdio.h>

int main(){
	
	int age;
	float income;
	
	printf("Enter your age:");
	scanf("%d",&age);
	
	printf("\nEnter your annual income:");
	scanf("%f",&income);
	 
	 if(age>=18 && income>=21000){
		 printf("\ncongratulation you qualify for the loan");}
		 
    if(age<18 || income<21000){
			 printf("unfortunately we are unable to offer you a loan at this time");}

/* we can also use tarnary  operator below	
	
	(age>=18 && income >=21000)? printf("eligible") :printf("not elible");
	*/

	
	
	
	
	return 0;

}
