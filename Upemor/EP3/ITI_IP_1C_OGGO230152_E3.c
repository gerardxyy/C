#include <stdio.h>
#include <stdlib.h>

/* Gerardo Xavier Ortiz Gonzalez 
                1C ITI          */

int main(){

int n1,n2,n3,n4;
int mayor,menor;

        system("clear");
puts("Ingresa los 4 numeros");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

if(n1>n2 && n1>n3 && n1>n4){
        mayor=n1;
        }

else if(n2>n1 && n2>n3 && n1>n4){
        mayor=n2;
        }

else if(n3>n1 && n3>n2 && n3>n4){
        mayor=n3;
        }
        
else if(n4>n1 && n4>n2 && n4>n3){
        mayor=n4;
        }

if (n1<n2 && n1<n3 && n1<n4){
        menor=n1;
        }

else if (n2<n1 && n2<n3 && n2<n4){
        menor=n2;
        }

else if (n3<n1 && n3<n2 && n1<n4){
        menor=n3;
        }

else if (n4<n1 && n4<n2 && n4<n2){
        menor=n4;
        }

        system("clear");
        int res;
        res=mayor+menor;
        printf("El resultado de %d + %d es: %d\n",mayor,menor,res);

return 0;
        }
