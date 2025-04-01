#include "stdlib.h"
#include "stdio.h"
#include "math.h"
// codigo a completar

int main(int argc, char const *argv[])
{
    #define N 20
    int i;
    double vt[N];
    double *puntero = vt;

    for(i = 0; i < N; i++)
    {
        *puntero = 1 + rand() % 100;
        printf(" %f ", vt[i]);
        puntero++;
    }

        return 0;
}
