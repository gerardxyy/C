#include <stdio.h>

float cal1,cal2,cal3;

main()

{

printf("Ingresa la calificacion 1\n");
scanf("%f",&cal1);

printf("Ingresa la calificacion 2\n");
scanf("%f",&cal2);

printf("Ingresa la calificacion 3\n");
scanf("%f",&cal3);

float final;
final=(cal1+cal2+cal3)/3;

printf("Tu promedio es de \t%.1f\n\n\n", final);


    return 0;
}