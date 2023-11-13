#include "stdio.h"

/*Declaracion de variables*/
float cal1,cal2,cal3,final;
/*Funcion que obtendra los datos que queremos*/

obtenerdatos(){

    printf("Ingresa la calificacion 1\n");
    scanf("%f",&cal1);

    printf("Ingresa la calificacion 2\n");
    scanf("%f",&cal2);

    printf("Ingresa la calificacion 3\n");
    scanf("%f",&cal3);
}

/*Aqui se calcula el promedio*/
calcularpromedio(){
    final=(cal1+cal2+cal3)/3;
}

/*Aqui lo muestra*/
mostrarpromedio(){
    printf("Tu promedio es: %.1f\n\n", final);

}


int main(){
    obtenerdatos();
    calcularpromedio();
    mostrarpromedio();

    return 0;
}