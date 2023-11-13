#include "stdio.h"

int opcion;

int main(){
    printf("Ingresa el dia de la semana en numero\n");
    scanf("%d",&opcion);

    switch (opcion)
    {
    case 1:
        printf("Lunes");
        break;
    
    case 2:
        printf("Martes");
        break;

    case 3:
        printf("Miercoles");
        break;

    case 4:
        printf("Jueves");
        break;

    case 5:
        printf("Viernes");
        break;

    case 6:
        printf("Viernes");
        break;

    case 7:
        printf("Sabado");
        break;

    case 8:
        printf("Domingo");
        break;


        default:
        printf("Numero invalido, solo numeros del 1 al 8.");
        break;
    }

    return 0;
}