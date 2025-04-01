#include "stdlib.h"
#include "stdio.h"
#include "math.h"


int main(){

    #define N 5
    #define M 7
    int i,j;
    int mt[N][M];
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            mt[i][j]=1+rand()%100;
            
            if (mt[i][j]<=9)
            {
                printf("%i  ", mt[i][j]);
            }else
            {
                printf("%i ", mt[i][j]);
            }
        }

            printf("\n");
        }
    return 0;
}

