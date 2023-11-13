#include <stdio.h>

int i,j;



main(){
    printf("\t\tIngresa el numero hasta el que quieres contar\n");
    scanf("%d",&j);


   if (j>0){
    for (i=1; i<=j; i++){
        printf("%d\n",i);
    }
}
else{
    printf("\n\"Numero ivalido\"\n");
}

return 0;
}



