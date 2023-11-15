#include <stdio.h>

int main(){

    printf("¿Que deseas hacer?\n 1-Mostrar tu nombre una serie de veces\n 2- Contar hasta determinado numero\n 3- Calcular Factorial\n\n");

    int opc;
    scanf("%d",&opc);

    switch (opc){
        case 1:
        char nom [10];
        int j,i;

        printf("Escribe tu nombre\n");
        scanf("%9s",&nom);

        printf("Cuantas veces?\n");
        scanf("%d",&j);

        for(i=1; i<=j; i++){
            printf("%d: %9s\n",i,nom);
        }
        break;

        case 2:

        printf("Hasta que numero deseas contar?");
        scanf("%d",j);
        for(i=1; i<=j; i++){
            printf("%d\n",j);
        }
        break;

        case 3:
        long double fac, res = 1;  
        printf("Ingresa el numero del que deseas sacar factorial\n");
        scanf("%Lf", &fac);  

        for (i = 1; i <= fac; i++) {
        res *= i;
    }

    printf("El factorial de %.0Lf es %.0Lf\n", fac, res);
        break;

        default:
        printf("Numero no valido.");
    
    }


}