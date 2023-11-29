#include <stdio.h>
#include <stdlib.h>

/* Gerardo Xavier Ortiz Gonzalez 
        1C ITI */

int main() {
    system("clear");
    int x,y;
    puts("Ingrese las coordenadas de x y luego de y): ");
    scanf("%d %d", &x, &y);
    double valory = 3*(x+5);

    if (y == valory) {
        printf("el punto (%d, %d) pertenece a la recta\n", x, y);
    } else {
        printf("el punto (%d, %d) no pertenece a la recta\n", x, y);
    }
    return 0;
}
