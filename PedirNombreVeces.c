#include <stdio.h>

int i,j;
char nom[10];

int main(){

    printf("\tIngresa tu nombre\n");
    scanf("%9s",&nom);

    printf("Cuantas veces deseas escribir tu nombre?\n");
    scanf("%d",&j);

    for(i=1; i<=j; i++)
    {
        printf("%d: %9s\n",i,nom);
    }
    
    

return 0;
}