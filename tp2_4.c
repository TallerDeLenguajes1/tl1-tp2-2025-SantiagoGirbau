#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "time.h"

    struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef compu;

compu generarCompu(compu pc1);
void listarPCs (compu pc[], int i);

int main()
{
    srand(time(NULL));
    
    compu pc[5];
    int trigger, cantidad;
    for (int i = 0; i < 5; i++)
    {
        pc[i] = generarCompu(pc[i]); 
        cantidad = i;
    }
    while (trigger!=0)
    {
    
    printf("Bienvenidos al himalaya:\n\n Escriba el numero correspondiente a la opcion que se desee realizar:\n 1 Listar PCs \n 2 Mostrar PC mas vieja \n 3 Mostrar PC mas veloz\n 0 Salir del programa");
    scanf("%i", &trigger);

    switch (trigger)
    {
        case 1:
            listarPCs(pc, cantidad);
            break;
        case 2:

            break;
        case 3:

            break;
        default:
        printf("ERROR: Opción no válida\n");
            break;
    }
        /* code */
    }




    

    return 0;
}

compu generarCompu(compu pc1){
    char tipos[6][10] = {"Intel", "Ryzen", "Celeron", "Athlon", "Core", "Pentium"};
    pc1.velocidad= 1+rand()%3;
    pc1.anio= 2015+rand()%10;
    pc1.cantidad_nucleos=1+rand()%8;
    pc1.tipo_cpu=tipos[1+rand()%6];
    return(pc1);
}

void listarPCs (compu pc[], int cantidad){

    for (short i = 0; i < cantidad; i++)
    {
        printf("\n  -Compu numero %i \n", (i+1));
        printf("Velocidad: %i GHz\n", pc[i].velocidad);
        printf("Anio: %i\n", pc[i].anio);
        printf("Cantidad de nucleos: %i\n", pc[i].cantidad_nucleos);
        printf("Tipo de la CPU: %i\n", pc[i].tipo_cpu);
    }
}