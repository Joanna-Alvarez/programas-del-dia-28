#include <stdio.h>
int main ()
{
    /*Jimena Tamariz
    Equpo 1
    30 abr 2021
    Programa 7. Pide 2 valores reales, calcula, multiplica divide y muestra resultado
    */


    float kg, precio;
    printf ("\n\n Programa 7");
    printf ("\n\n Vender tortillas");
    printf ("\n\n Precio de las tortillas 1kg por $15");
    printf ("\n\n Cuantos kilos de tortilla quieres");
    scanf ("%f",&kg);
    precio=kg*15;
    printf ("\n\n El resultado es %f", precio);


    return 0;
}