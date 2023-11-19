#include <stdio.h>
#include <stdlib.h>

int main(){
//Añado esto para borrar los comandos anteriores del gcc xd

float A,B,C,D;

system ("clear");

//La funcion puts es mas corta que el printf y mas simple (cuando no quiero mostrar ningun dato)

puts("Peso de la esfera 1: \n");
scanf("%f",&A);

puts("Peso de la esfera 2: \n");
scanf("%f",&B);

puts("Peso de la esfera 3: \n");
scanf("%f",&C);

puts("Peso de la esfera 4: \n");
scanf("%f",&D);

        if (A==B && B==C){
                system ("clear");
                printf("La esfera diferente es la 4, y su peso es de %.2f\n",D);
        }

        else if (B==A && A==D){

                system ("clear");
                printf("La esfera diferente es la 3, y su peso es de %.2f\n",C);
        }

        else if (A==C && C==D){

                system ("clear");
                printf("La esfera diferente es la 2 y su peso es de: %.2f\n");
                }

        else{ 
                system ("clear");
            printf("La esfera diferente es la 1 y su peso es de: %.2f\n",A);   
        }

return 0;
        }
