#include <stdio.h>
#include <stdlib.h>
/* Gerardo Xavier Ortiz Gonzalez 
        1C ITI                  */

int main(){
        float n1,n2,n3,n4;

        puts("Ingresa los 4 datos");
        scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

        if (n1>n2 && n1>n3 && n1>n4){
                system("clear");
        printf("El numero mayor es el %.2f\n",n1);
                }

        else if (n2>n1 && n2>n3 && n2>n4){
                system("clear");
        printf("El numero mayor es el %.2f\n",n2);
        }

        else if (n3>n1 && n3>n2 && n3>n4){
                system("clear");
        printf("El numero mayor es el %.2f\n",n3);
       }

        else if (n4>n1 && n4>n3 && n4>n2){
                system("clear");
        printf("El numero mayor es el %.2f\n",n4);
        }

return 0;
        }
