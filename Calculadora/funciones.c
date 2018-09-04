#include "operador.h"

float funcionSuma (float operandoUno, float operandoDos)
{
    float resultado;

    resultado = operandoUno + operandoDos;

    return resultado;
}

float funcionResta (float operandoUno, float operandoDos)
{
    float resultado;

    resultado = operandoUno - operandoDos;

    return resultado;
}

float funcionDivision (float operandoUno, float operandoDos)
{
    float resultado;

    if(operandoDos != 0)
    {
        resultado = operandoUno / operandoDos;
    }

    return resultado;
}

float funcionMultiplicacion(float operandoUno, float operandoDos)
{
    float resultado;

    resultado = operandoUno * operandoDos;

    return resultado;
}

int funcionFactorialUno (float operandoUno)
{
    int numeroUno;
    int resultado = 1;

    numeroUno = operandoUno;

    if(numeroUno == operandoUno && numeroUno > 0)
    {
        do
        {
            resultado = resultado * numeroUno;
            numeroUno--;

        }
        while(numeroUno >= 1);
    }
    else if(numeroUno == operandoUno && numeroUno == 0)
    {
        resultado = 1;
    }

    return resultado;
}

int funcionFactorialDos (float operandoDos)
{
    int numeroDos;
    int resultado = 1;

    numeroDos = operandoDos;

    if(numeroDos == operandoDos && numeroDos > 0)
    {
        do
        {
            resultado = resultado * numeroDos;
            numeroDos--;

        }
        while(numeroDos >= 1);
    }
    else if(numeroDos == operandoDos && numeroDos == 0)
    {
        resultado = 1;
    }

    return resultado;
}

