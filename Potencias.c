#include <stdio.h>
#include <math.h>
#include <stdlib.h>

main(){

    int j,i,res;
    printf("Ingresa el numero y la potencia que deseas obtener\n");
    scanf("%d %d",&i,&j);
    system("clear");

        res=pow(i,j);

    printf("El resultado es: %d",res);
    
}