

/*NAME:FRANKLINE MONI
ADM:PA106/G/28937/25
DESCRIPTION:a code to display number of occupied rooms in a branch*/



#include<stdio.h>

int main(){
    
    int chain[3][5][10]={{{0,1,1,1,1,1,1,1,0,0},
                          {0,1,1,1,1,1,1,1,0,0},
                        {0,1,1,1,1,1,1,1,0,0},
                    {0,1,1,1,1,1,1,1,0,0},
                {0,1,1,1,1,1,1,1,0,0}},
                {{0,1,1,1,1,1,1,1,0,0},
                          {0,1,1,1,1,1,1,1,0,0},
                        {0,1,1,1,1,1,1,1,0,0},
                    {0,1,1,1,1,1,1,1,0,0},
                {0,1,1,1,1,1,1,1,0,0}},
                {{0,1,1,1,1,1,1,1,0,0},
                          {0,1,1,1,1,1,1,1,0,0},
                        {0,1,1,1,1,1,1,1,0,0},
                    {0,1,1,1,1,1,1,1,0,0},
                {0,1,1,1,1,1,1,1,0,0}}};

                int occupied=0;
                int vacant=0;
                int i,j,k;

                for(i=0;i<3;i++){
                    for(j=0;j<5;j++){
                        for(k=0;k<10;k++){
                            if(chain[i][j][k]==1){occupied++;}
                            else {vacant++;}
                        }
                    }
                }
                printf("occupied rooms=%d",occupied);
                

    return 0;
}