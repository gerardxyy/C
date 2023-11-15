#include <stdio.h>
#include <math.h>

float hipotenusa, cateto1, cateto2;

int main() {
    printf("\tIngresa los dos catetos\n");
    scanf("%f %f", &cateto1, &cateto2);

    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

    printf("La hipotenusa es: %f\n", hipotenusa);

    return 0;
}
