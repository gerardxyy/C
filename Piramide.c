#include <stdio.h>
#include <stdlib.h>

int main()
{
        system("clear");
   int num, a, b, d,temp,n;

   printf("Escriba el numero de renglones para la piramide ");
   scanf("%d",&b);

   temp = n;

   for ( num = 1 ; num <= b ; num++ )
   {
      for ( a = 1 ; a < d ; a++ )
         printf(" ");

      d--;

      for ( a = 1 ; a <= 2*num - 1 ; a++ )
         printf("*");

      printf("\n");
   }

   return 0;
}
