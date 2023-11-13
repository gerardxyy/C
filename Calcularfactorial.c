#include <stdio.h>

int i;
long double fac, res = 1;  

int main() {
    printf("Ingresa el numero del que deseas sacar factorial\n");
    scanf("%Lf", &fac);  

    for (i = 1; i <= fac; i++) {
        res *= i;
    }

    printf("El factorial de %.0Lf es %.0Lf\n", fac, res);

    return 0;
}
