#include <stdio.h>

   int main() {
    int decimalN,i,j;

    puts("Ingrese un número decimal: ");
    scanf("%d", &decimalN);

 int octalNumber[100];
 i = 0;

    while (decimalN != 0) {
        octalNumber[i] = decimalN % 8;
        decimalN /= 8;
        i++;
    }

    printf("El equivalente octal es: ");
    for (j = i - 1; j >= 0; j--) {
        printf("%d", octalNumber[j]);
    }
    printf("\n");
    return 0;

}


 

   
