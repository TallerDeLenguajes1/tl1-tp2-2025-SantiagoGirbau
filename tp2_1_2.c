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
        vt[i] = 1 + rand() % 100;
        printf("%f", vt[i]);
    }

        return 0;
}
