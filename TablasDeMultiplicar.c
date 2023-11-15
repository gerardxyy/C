#include <stdio.h>
#include <stdlib.h>

int i,j,t;

int main(){

    printf("Ingresa el numero para concoer su tabla de multiplicar.\n");
    scanf("%d",&j);

    system("clear");
    
    for(i=1; i<=10; i++){

        t=i*j;


        printf("%d x %d = %d\n",j,i,t);
    }
}