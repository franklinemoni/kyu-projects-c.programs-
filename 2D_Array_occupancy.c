
/*NAME:FRANKLINE MONI
ADM:PA106/G/28937/25
DESCRIPTION:a code to display number of occupied and vacant rooms per floor*/


#include<stdio.h>

int main(){

    int occupancy[5][10]={{0,1,1,1,1,1,1,1,0,0},
                          {0,1,1,1,1,1,1,1,0,0},
                        {0,1,1,1,1,1,1,1,0,0},
                    {0,1,1,1,1,1,1,1,0,0},
                {0,1,1,1,1,1,1,1,0,0},};

int i,j;
int vacant;
int occupied;
                for(i=0;i<5;i++){
                    occupied=0;
                    vacant=0;
                    for(j=0;j<10;j++){
                        if(occupancy[i][j]==1){occupied++;}
                        else {vacant++;}
                    }
                    printf("floor %d: occupied=%d > vacant=%d\n",i+1,occupied,vacant);
                }
                


    return 0;
}