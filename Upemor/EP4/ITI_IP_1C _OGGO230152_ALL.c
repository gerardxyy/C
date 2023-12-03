#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//recibe pero no retorna, asi que es void y aqui acaba owo
void problema3(int x,int y){
 double valory = 3*(x+5);

    if (y == valory) {
        printf("el punto (%d, %d) pertenece a la recta\n", x, y);
    } else {
        printf("el punto (%d, %d) no pertenece a la recta\n", x, y);
    }
}
//No recibe ni retorna asi que se hace tood el programa en funcion creo (?)
void problema2(){
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

    
}


// Void porque no retorna nada uwu PROBLEMA 1
int proceso1(float A, float B, float C, float D) {
    if (A == B && B == C) {
        system("clear");
        printf("La esfera diferente es la 4, y su peso es de %.2f\n", D);
    } else if (B == A && A == D) {
        system("clear");
        printf("La esfera diferente es la 3, y su peso es de %.2f\n", C);
    } else if (A == C && C == D) {
        system("clear");
        printf("La esfera diferente es la 2 y su peso es de: %.2f\n", B);
    } else {
        system("clear");
        printf("La esfera diferente es la 1 y su peso es de: %.2f\n", A);
    }
}



int main() {
    float A, B, C, D;
    int opc;
    system("clear");

puts("Elige el programa a ejecutar");
scanf("%d",&opc);
switch(opc){
case 1:
    puts("Peso de la esfera 1: ");
    scanf("%f", &A);

    puts("Peso de la esfera 2: ");
    scanf("%f", &B);

    puts("Peso de la esfera 3: ");
    scanf("%f", &C);

    puts("Peso de la esfera 4: ");
    scanf("%f", &D);

    proceso1(A, B, C, D);
break;

case 2:
    problema2();
    break;

case 3:
    int x,y;
    puts("Ingrese las coordenadas de x y luego de y): ");
    scanf("%d %d", &x, &y);
    problema3(x, y); 
    break;

default:
puts("Numero incorrecto");
}
    
}
