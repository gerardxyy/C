#include <stdio.h>
#include <stdlib.h>

int main (void){
        system("clear");
        float lado1,lado2,lado3,base,altura,area;
        puts("\tIngresa los 3 lados de tu triangulo"); scanf("%f %f %f",&lado1,&lado2,&lado3);

        if(lado1=lado2=lado3){
                area= (lado1*lado2)/2;
                printf("\nTipo de triangulo: EQUILATERO\nArea: %.2f\n",area);
                
                }





return 0;
        }
