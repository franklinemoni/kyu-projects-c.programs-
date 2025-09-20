/*
name:frankline moni
ADM:PA106/G/28937/25
DATE:20/09/2025
DESCRIPTION:prompting the user to enter to radius and height to find
            surface area and volume
*/

#include<stdio.h>include 

int main(){
	
	float pie=3.142;
	double radius,height,volume,SA;
	
	
	printf("\nwhat is the radius?");
	scanf("%lf",&radius);
	
	printf("what is the height?");
	scanf("%lf",&height);
	 
	 volume=pie*radius*radius*height;
	 
	printf("\nvolume is %.1lf",volume);
	
	SA=2*pie*radius*radius+(2*pie*radius*height);
	
	printf("\nsurface area is %.1lf",SA);
	
	
	return 0;
}