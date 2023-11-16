#include <stdio.h>
#include <stdlib.h>

int opc;

int main(){
  printf("\n\tGerardo Xavier Ortiz Gonzalez\n\n1.- Desarrollar un algoritmo que lea un numero entero positivo y saber si es par o impar\n\n 2.- Leer dos números enteros positivos y determinar si el último dígito de un número es igual al último dígito del otro\n\n 3.- Leer dos números y determinar cuál de los dos es mayor.\n\n 4. Leer un número entero positivo y determinar si es un número primo.\n\n 5.- Leer un número entero menor que 50 que sea positivo y determinar si es un número impar.\n\n 6.- Dado el sueldo de un trabajador, aplíquele un aumento del 15 si su sueldo es inferior a $1000, y un 12 en caso contrario. Imprima el sueldo del trabajador.\n\n");
  scanf("%d",&opc);

    /*Lo hize con un switch para no hacer tantos programas profe XD*/

 switch (opc){
        
        /*Programa num1*/

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

        /* Programa numdos*/
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

        case 3:
        system("clear");
        int n1,n2;
        printf("Escribe dos numeros para determinar cual es el mayor o el menor\n");
        scanf("%d %d",&n1,&n2);
        system("clear");
        if(n1>n2){
                printf("El mayor es: %d",n1);
        }
        else if(n2>n1){
                printf("El numero mayor es %d",n2);

        }
        else if(n1=n2){
                printf("Los numeros son iguales XD");
                }
        break;
                
                case 4:
                system("clear");
            printf("Ingresa el numero para determinar si es primo: \n");
            scanf("%d", &n1);

            if (n1 <= 1) {
                printf("No es primo unu\n");
            } else {
                int es_primo = 1;

                for (int i = 2; i * i <= n1; i++) {
                    if (n1 % i == 0) {
                        es_primo = 0;  
                        break;      
                    }
                }

                if (es_primo) {
                    printf("Es primo\n");
                } else {
                    printf("No es primo unu\n");
                }
            }
            break;
}
return 0;

            }

