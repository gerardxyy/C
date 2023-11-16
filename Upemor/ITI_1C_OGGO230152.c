#include <stdio.h>
#include <stdlib.h>

int opc;

int main(){
  printf("\n\tGerardo Xavier Ortiz Gonzalez\n\n1.- Desarrollar un algoritmo que lea un numero entero positivo y saber si es par o impar\n\n 2.- Leer dos números enteros positivos y determinar si el último dígito de un número es igual al último dígito del otro\n\n 3.- Leer dos números y determinar cuál de los dos es mayor\n\n 3.- Leer dos números y determinar cuál de los dos es mayor.\n\n 4. Leer un número entero positivo y determinar si es un número primo.\n\n 5.- Leer un número entero menor que 50 que sea positivo y determinar si es un número impar.\n\n 6.- Dado el sueldo de un trabajador, aplíquele un aumento del 15 si su sueldo es inferior a $1000, y un 12 en caso contrario. Imprima el sueldo del trabajador.\n\n");
  scanf("%d",&opc);

    /*Lo hize con un switch para no hacer tantos programas profe XD*/

 switch (opc){
        
        case 1:
        system("clear");
        printf("Ingresa tu numero\n");
        int num;
        scanf("%d",&num);
        system("clear");
        if (num % 2==0){
                printf("Es par\n");
         }
        else{
                printf("Es impar\n");
                }
        break;


        case 2:
        system("clear");
        int i,j;
        printf("Ingresa dos numeros\n");
        scanf("%d %d",&i,&j);
        if (i=j){
                system("clear");
                printf("Son numeros iguales");

                }
        else{
                printf("Son numeros diferentes");
                }
        break;

        /*----------------------*/
        default:
                printf("Numero no valido");
}

return 0;

}

