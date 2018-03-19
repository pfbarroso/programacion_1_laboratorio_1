#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //int (4 bytes) máscara de entrada: %d -- float (4 bytes) %f -- char (1 byte) %c

    int numero1;
    float numero2;
    float suma;
    char letra;

    //numero1 = 8;
    //numero2 = 8.5;


    //printf("El numero es: " + numero); en JS
    //printf("Esto esta mal\n");
    //scanf() = leer input / NO se asigna a la variable
    //  recibe 2 parámetros    ("máscara de entrada del tipo de dato" %d - hasta dónde puede leer,
    //                          "dirección de memoria de una variable: &" &variable - desde qué dirección de memoria)

    printf("Ingrese el numero 1 \n");
    scanf("%d",&numero1);
    printf("Ingrese el numero 2 \n");
    scanf("%f",&numero2);
    fflush(stdin);
    printf("Ingrese una letra \n");
    //letra = getchar();

    letra = toupper(getchar());


    //printf("\n");

    //scanf("%c",&letra);    //" %c"-El espacio sirve para evitar que el ENTER cargado en el buffer sea leído como caracter

    suma = numero1 + numero2;

    printf("El numero 1 es: %d y el numero 2 es: %.2f \n",numero1, numero2);
    printf("La suma es: %.2f \n",suma);
    printf("La letra ingresada es: %c",letra);


    return 0;
}
