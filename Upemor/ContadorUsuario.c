#include <stdio.h>


int main(){
        int i;
        int j;

        puts("Desde que numero quieres contar?\n");
        scanf("%d",&i);
        puts("Hasta cual numero?");
        scanf("%d",&j);

        while (i<j){
                printf("%d\n",i);
                i++;
        }
return 0;


        }



