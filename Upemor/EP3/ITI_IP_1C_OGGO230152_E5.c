#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/* Gerardo Xavier Ortiz Gonzalez
        1C ITI */
void clasificarTriangulo(int a, int b, int c) {    
}

int main() {
        system("clear");
    int a,b,c,area;
                
    puts("Ingresa los tres lados del triangulo\nCOMENZANDO POR LA BASE Y DESPUES LA ALTURA:\n ");
    scanf("%d %d %d", &a, &b, &c);
            area=(a*b)/2;
    if (a+b>c && a+c>b && b+c>a) {
        if (a==b && b==c) {
            printf("El triángulo es equilatero\nArea: %d\n",area);
        } else if (a==b || a==c || b == c) {
            printf("el triangulo es isosceles.\nArea: %d\n",area);
        } else {
            printf("el triangulo es escaleno.\nArea: %d\n",area);
        }
    } else {
        printf("los valores no forman un triangulo.\n");
    }

    return 0;
}

