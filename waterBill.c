/*
name:frankline moni
ADM:PA106/G/28937/25
DISCRIPTION:units consumed by user
*/





#include<stdio.h>

main(){
	 
	 float units,total;
	 
	 printf("Enter units consumed:");
	 scanf("%f",&units);
	 
	 if(units<=30)
	 total=units*20;
 
        else if (units>30 && units<=60)
	  	total=units*25;

	 else if (units>60)
	 	total=units*30;
	 
	 else printf("invalid");
	 printf("total water bill kshs%.2f\n",total);
	 
	 
	
	
	
	
	
	return 0;
}