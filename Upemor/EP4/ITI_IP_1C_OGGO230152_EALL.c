#include <stdio.h>
#include <stdlib.h>

void problema1(float A,float B,float C,float D){
       system ("clear");


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


}
 
int main (void){
        system("clear");
         float A,B,C,D;

        int opcion;
               //Variables

        puts("Elige el programa a ejecutar\n1.-Programa esfera\n2.-Identificar Triangulos\n3.-Ordenada de Y\n");
        scanf("%d",&opcion); 

        switch (opcion){
        
                case 1:
                 scanf("%f %f %f %f",&A,&B,&C,&D); 
                 problema1();
 
        }


}
