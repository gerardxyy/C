#include <stdio.h>
#include <stdlib.h>

int opc;

int main(){
  printf("\n\tGerardo Xavier Ortiz Gonzalez\n\t1C ITI\n\n1.- Desarrollar un algoritmo que lea un numero entero positivo y saber si es par o impar\n\n 2.- Leer dos números enteros positivos y determinar si el último dígito de un número es igual al último dígito del otro\n\n 3.- Leer dos números y determinar cuál de los dos es mayor.\n\n 4. Leer un número entero positivo y determinar si es un número primo.\n\n 5.- Leer un número entero menor que 50 que sea positivo y determinar si es un número impar.\n\n 6.- Dado el sueldo de un trabajador, aplíquele un aumento del 15 si su sueldo es inferior a $1000, y un 12 en caso contrario. Imprima el sueldo del trabajador.\n\n");
  scanf("%d",&opc);

    /*Lo hize con un switch para no hacer tantos programas profe XD*/

 switch (opc){
        
        /* el 1*/

        case 1:
        
        system("clear");
        printf("Ingresa tu numero\n");
        int num;
        scanf("%d",&num);
        system("clear");
        if (num>0){
        if (num % 2==0){
                printf("Es par\n");
         }
        else{
                printf("Es impar\n");
                }
         }
         else{
                 printf("Numero invalido");
         }
        break;

        /* El dos */

        case 2:
        system("clear");
        int i,j;
        printf("Ingresa dos numeros\n");
        scanf("%d %d",&i,&j);
        if (j==i){
                system("clear");
                printf("Son numeros iguales");

                }
        else{
                printf("Son numeros diferentes");
                }
        break;
                /* El 3 */
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

               /* El 4 */ 

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

            /*el 5*/

            case 5:
            system("clear");

            printf("Ingresa un numero\n");
            scanf("%d",&num);
                system("clear");
            if (num<=50 && num % 2==0){
            printf("Es par");
            }

            else if  (num<=50 && num % 2==1){
                    printf("Es impar");
                    }

            else if (num>50){
                        printf("Numero invalido, solo MENORES DE 50 :(");
                    }
                    break;

            /* el 6 */

            case 6:
            int salario,sueldofin;

            system("clear");
            printf("Ingrese el sueldo del trabajador\n");
            scanf("%d",&salario);

            if (salario<1000){
                sueldofin = (salario * 1.15);
                printf("Tu sueldo final es de: %d",sueldofin);
                    }
            else if (salario>1000){
                        sueldofin = (salario * 1.12);
                        printf("Tu sueldo final es de:  %d",sueldofin);
                    }
                    break;

}
return 0;

            
}
