 /*NAME:frankline moni
 ADM:PA106/G/28937/25
 DESCRIPTION:prompting user to enter distance traveleed in km 
 and returning total fare in kshs.*/ 



  #include<stdio.h>

 float CalculateFare(float km){
    float total=km*50;
    return total;
 }


  int main(){

    float km;
    printf("ENTER distance travelled in km:\n");
    scanf("%f",&km);

    float result=CalculateFare(km);
    printf("Total fare is kshs%.2f",result);

    return 0;
  }