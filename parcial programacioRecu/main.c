#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aplicarDescuento(int precio);
int contarCaracteres(char cadena[], char letra);

int main()
{
    int a = 100;
    int b;
    char cadena[20] = "pepe";
    char letra = 'e';

   b = aplicarDescuento(a);

   printf("%d", b);

   b = contarCaracteres(cadena, letra);
   printf("%d", b);


}

int aplicarDescuento(int precio)
{
    int descuento;

    descuento = (precio * 5) / 100;

    return descuento;
}

int contarCaracteres(char cadena[], char letra)
{
    int contador = 0;
    int tam = strlen(cadena);

    for(int i = tam -1; i >= 0; i--)
    {
        if(cadena[i] == letra)
        {
            contador++;
        }
    }
    return contador;
}
