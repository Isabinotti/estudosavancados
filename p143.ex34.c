#include<stdio.h>

float main()
{
     float X;
     printf("Insira o numero:");
     scanf("%f",&X);
     if(X>3)
     {
         printf("maior que tres");
     }
     if(X==3)
     {
         printf("igual a tres");
     }
     if(3>X)
     {
         printf("menor que tres");
     }
}
