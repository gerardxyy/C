#include <stdio.h>
#include <math.h>

// Función para verificar y clasificar el triángulo
void clasificarTriangulo(int a, int b, int c) {
    
}

int main() {
    // Ingresar los tres lados del triángulo
    int a, b, c;
    printf("Ingrese los tres lados del triángulo (separados por espacios): ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        // Verificar el tipo de triángulo
        if (a == b && b == c) {
            printf("El triángulo es equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("El triángulo es isósceles.\n");
        } else {
            printf("El triángulo es escaleno.\n");
        }
    } else {
        printf("Los valores no forman un triángulo.\n");
    }

    return 0;
}

