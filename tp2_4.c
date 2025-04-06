#include "stdlib.h"
#include "stdio.h"
#include "math.h"
#include "time.h"
#include "string.h"

    struct compu {
 int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3)
 int anio; // Año de fabricación (valor entre 2015 y 2024)
 int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8)
 char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres)
}typedef compu;

compu generarCompu(compu pc1);
void listarPCs (compu pc[], int cantidad);
void mostrarMasVieja(compu pc[], int cantidad);
void mostrarMasVeloz(compu pc[], int cantidad);

int main()
{
    srand(time(NULL));
    char tipos[6][10] = {"Intel", "Ryzen", "Celeron", "Athlon", "Core", "Pentium"};
    compu pc[5];
    int trigger, cantidad=0;
    for (int i = 0; i < 5; i++)
    {
        pc[i] = generarCompu(pc[i]);
        pc[i].tipo_cpu=tipos[rand()%6];
        cantidad++;
    }
    
    do{
        printf("Bienvenidos al himalaya:\n\n Escriba el numero correspondiente a la opcion que se desee realizar:\n 1 Listar PCs \n 2 Mostrar PC mas vieja \n 3 Mostrar PC mas veloz\n 0 Salir del programa\n\n");
        scanf("%i", &trigger);
        switch (trigger)
        {
            case 1:
                listarPCs(pc, cantidad);
                break;
            case 2:
                mostrarMasVieja(pc, cantidad);
                break;
            case 3:
                mostrarMasVeloz(pc, cantidad);
                break;
            default:
            printf("ERROR: Opción no válida\n");
                break;
        }
        
    }while (trigger!=0);
    return 0;
}

compu generarCompu(compu pc1){
    
    pc1.velocidad= 1+rand()%3;
    pc1.anio= 2015+rand()%10;
    pc1.cantidad_nucleos=1+rand()%8;
    return(pc1);
}

void listarPCs (compu pc[], int cantidad){

    for (short i = 0; i < cantidad; i++)
    {
        printf("   -----Compu------\n");
        printf("Velocidad: %i GHz\n", pc[i].velocidad);
        printf("Anio: %i\n", pc[i].anio);
        printf("Cantidad de nucleos: %i\n", pc[i].cantidad_nucleos);
        printf("Tipo de la CPU: ");
        puts(pc[i].tipo_cpu);
        printf("\n");
        
    }
}

void mostrarMasVieja(compu pc[], int cantidad){
    compu masVieja;
    masVieja.anio=pc[0].anio;
    masVieja=pc[0];

    for (short i = 0; i < cantidad; i++)
    {
        if (pc[i].anio<masVieja.anio)
        {
            masVieja=pc[i];
        }   
    }
    printf("La computadora más vieja es:\n\n");
    listarPCs(&masVieja, 1);
}

void mostrarMasVeloz(compu pc[], int cantidad){

    compu masVeloz;
    masVeloz.anio=pc[0].anio;
    masVeloz=pc[0];

    for (short i = 0; i < cantidad; i++)
    {
        if (pc[i].velocidad>masVeloz.velocidad)
        {
            masVeloz=pc[i];
        }
    }
    printf("La computadora más veloz es:\n\n");
    listarPCs(&masVeloz, 1);
}
