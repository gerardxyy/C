#include "stdio.h"

float num;

main(){
    printf("Ingresa el numero para verificar si es positivo o negativo\n");
    scanf("%f",&num);

    if(num>=1){
        printf("Es positivo.\n");
    }
    else if (num==0){
        printf("Es cero\n");
    }
    else if (num<0){
        printf("Es negativo.");
    }
}