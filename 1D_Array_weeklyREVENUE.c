
/*NAME:FRANKLINE MONI
ADM:PA106/G/28937/25
DESCRIPTION:a code to display to display weekly and daily average revenue recorded*/




#include<stdio.h>

int main(){

    float revenue[7];
    int i;
    float sum=0;

    for (i=0;i<7;i++){
        printf("enter revenue:\n");
        scanf("%f",&revenue[i]);
        sum+=revenue[i];

    }
    printf("%f\n",sum);
    float ave=sum/7;
    printf("%f",ave);

    return 0;
}