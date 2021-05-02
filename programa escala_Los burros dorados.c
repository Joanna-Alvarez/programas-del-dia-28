#include <stdio.h>

int main ()
{
    /*Joanna Alvarez
    Equipo 1
    30 abr 21
    Programa Escala. Pide dos valores reales, calcula multiplica  y muestra resultado
    */

    float dimensiondeldibujo, dimensiondelobjeto, escala;
    printf ("\n\n Programa Escala");
    printf ("\n\n Ingrese la dimension del dibujo");
    scanf ("%f",&dimensiondeldibujo);
    printf ("\n\n Ingrese la dimension del objeto");
    scanf ("%f",&dimensiondelobjeto);
    escala=(dimensiondeldibujo/dimensiondeldibujo)/(dimensiondelobjeto/dimensiondeldibujo);
    printf ("\n\n El resultado de la escala es %f", escala);

    return 0;
}