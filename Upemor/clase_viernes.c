#include <stdio.h>


int main(){
        int i;
        int j;

        puts("Desde que numero quieres contar?\n");
        scanf("%d",&i);
        puts("Hasta cual numero?\n");
        scanf("%d\n",&j);
        
        if (i<j){
                 j=j+1;
        while (i<j){
                printf("%d",i);
                i++;
        }
        }

        else if (i>j){
                puts("No se puede pendejo");
        }
return 0;


        }



