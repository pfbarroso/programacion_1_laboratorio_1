#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MAX_VALOR 100
#define MIN_VALOR -100

float   leerNumero(int minimo, int maximo);
char    leerOperador(void);
float   Calcular(float num1, char operador, float num2);

int main()
{
    float numero1 = leerNumero(MIN_VALOR,MAX_VALOR);
    while (numero1>NumeroMax || numero1 < NumeroMin)//esto va a la funcion de leerNumero
    {
        printf("Numero no comprendido. Reingrese.\n");
        numero1 = leerNumero();
    }
    char operacion = leerOperador();
    float numero2 = leerNumero();
    while (numero2>NumeroMax || numero2 < NumeroMin)
    {
        printf("Numero no comprendido. Reingrese.\n");
        numero1 = leerNumero();
    }
    Calcular(numero1, operacion, numero2);
    return 0;
}
//============================================//
float leerNumero()
{
    printf("Ingrese operando: \n");
    float ingresado;
    scanf("%f",&ingresado);
    return ingresado;
}   //Fin de leerNumero()
char leerOperador()
{
    char operador;
    printf("Ingrese operador: \n");
    operador = getche();
    while(operador !='+' && operador !='-' && operador !='*' && operador !='/')
    {
        printf("Operador no valido. Reingrese: \n");
        operador = getche();
    }
    printf("\n");
    return operador;
}   //Fin de leerOperador()
float Calcular(float num1, char operador, float num2)
{
    printf("\nDatos ingresados: %.2f %c %.2f \n",num1,operador,num2);

    float resultadoCalc;
    int flag = 0;

    switch (operador)
    {
    case '+':
        resultadoCalc = num1 + num2;
        break;
    case '-':
        resultadoCalc = num1 - num2;
        break;
    case '*':
        resultadoCalc = num1 * num2;
        break;
    default:
        if(num2 != 0)
        {
            resultadoCalc = num1 / num2;
        }
        else
        {
            flag = 1;
        }
        break;

    }   //Fin de switch(operador)

    if(flag==1)
    {
        printf("\nNo se puede dividir por cero.\n");
    }
    else
    {
        printf("\nResultado: %.2f\n",resultadoCalc);
    }

}   //Fin de Calcular()

int Max()
{
    int Max;
    printf("Ingrese Maximo habilitado: \n");
    scanf("%d",&Max);
    return Max;
}

int Min()
{
    int Min;
    printf("Ingrese Minimo habilitado: \n");
    scanf("%d",&Min);
    return Min;
}
