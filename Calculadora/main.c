#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "operador.h"



int main()
{
    int opcionMenu;
    int opcionSubmenu;
    float operandoUno;
    int banderaOperandoUno = 0;
    float operandoDos;
    int banderaOperandoDos = 0;
    float resultadoSuma;
    int banderaSuma = 0;
    float resultadoResta;
    int banderaResta = 0;
    float resultadoDivision;
    int banderaDivision = 0;
    float resultadoMultiplicacion;
    int banderaMultiplicacion = 0;
    int resultadoFactorialUno;
    int banderaFactorialUno = 0;
    int resultadoFactorialDos;
    int banderaFactorialDos = 0;
    int comprobacionFactorialUno = operandoUno;
    int comprobacionFactorialDos = operandoDos;

    do
    {

        printf("\n_____________________________________________\n");

        if(banderaOperandoUno == 0)
        {
            printf("\n1 - Ingrese el primer operando.\n");
        }
        else if(banderaOperandoUno == 1)
        {
            printf("\n1 - Ingrese el pimer operando: %.2f\n", operandoUno);
        }

        if(banderaOperandoDos == 0)
        {
            printf("2 - Ingrese el segundo operando.\n");
        }
        else if(banderaOperandoDos == 1)
        {
            printf("2 - Ingrese el segundo operando. %.2f\n", operandoDos);
        }

        printf("3 - Calcular todas las operaciones.\n");
        printf("4 - Informar resultados.\n");
        printf("5 - Salir.\n");

        printf("_____________________________________________\n");

        opcionMenu = elegirOpcion();

        switch(opcionMenu)
        {
        case 1:
            operandoUno = primerOperando();
            banderaOperandoUno = 1;
            system("cls");
            break;
        case 2:
            operandoDos = segundoOperando();
            banderaOperandoDos = 1;
            system("cls");
            break;
        case 3:
            printf("_____________________________________________\n");
            printf("\n1 - Calcular la suma\n");
            printf("2 - Calcular la resta\n");
            printf("3 - Calcular la division\n");
            printf("4 - Calcular la multiplicacion\n");
            printf("5 - Calcular el factorial\n");
            printf("_____________________________________________\n");
            opcionSubmenu = submenu();
            switch(opcionSubmenu)
            {
            case 1:
                resultadoSuma = funcionSuma(operandoUno, operandoDos);
                banderaSuma = 1;
                system("cls");
                break;
            case 2:
                resultadoResta = funcionResta(operandoUno, operandoDos);
                banderaResta = 1;
                system("cls");
                break;
            case 3:
                resultadoDivision = funcionDivision(operandoUno, operandoDos);
                banderaDivision = 1;
                system("cls");
                break;
            case 4:
                resultadoMultiplicacion = funcionMultiplicacion(operandoUno, operandoDos);
                banderaMultiplicacion = 1;
                system("cls");
                break;
            case 5:
                resultadoFactorialUno = funcionFactorialUno(operandoUno);
                banderaFactorialUno = 1;
                resultadoFactorialDos = funcionFactorialDos(operandoDos);
                banderaFactorialDos = 1;
                system("cls");
                break;
            default:
                printf("Ingrese una opcion valida.\n");
                submenu();
            }
            system("cls");
            break;
        case 4:
            if(banderaSuma == 1)
            {
                printf("El resultado de %.2f", operandoUno);
                printf(" + %.2f", operandoDos);
                printf(" es: %.2f\n", resultadoSuma);
            }
            if(banderaResta == 1)
            {
                printf("El resultado de %.2f", operandoUno);
                printf(" - %.2f", operandoDos);
                printf(" es: %.2f\n", resultadoResta);
            }
            if(banderaDivision == 1 && operandoDos != 0)
            {
                printf("El resultado de %.2f", operandoUno);
                printf(" / %.2f", operandoDos);
                printf(" es: %.2f\n", resultadoDivision);
            }
            else if(operandoDos == 0)
            {
                printf("No es posible dividir por 0\n");
            }
            if(banderaMultiplicacion == 1)
            {
                printf("El resultado de %.2f", operandoUno);
                printf(" * %.2f", operandoDos);
                printf(" es: %.2f\n", resultadoMultiplicacion);
            }
            break;
        case 5:
            break;
        default:
            printf("Ingrese una opcion valida.\n");
        }

    }
    while(opcionMenu != 5);

    return 0;
}




