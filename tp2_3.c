#include "stdlib.h"
#include "stdio.h"
#include "math.h"


int main(){

    #define N 5
    #define M 7
    int i,j;
    int mt[N][M];
    int *puntero = mt;
    
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *puntero=1+rand()%100;
            
            if (*puntero<=9)
            {
                printf("%i  ", *puntero);
            }else
            {
                printf("%i ", *puntero);
            }

            puntero++;
        }

            printf("\n");
        }
    return 0;
}

