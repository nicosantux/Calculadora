#include "funciones.h"

int elegirOpcion(void)
{
    int opcionMenu;

    printf("\nIngrese una opcion: ");
    scanf("%d", &opcionMenu);

    return opcionMenu;
}

float primerOperando(void)
{
    float operando;

    printf("\nIngrese el primer operando: ");
    scanf("%f", &operando);

    return operando;
}

float segundoOperando (void)
{
    float operando;

    printf("\nIngrese el segundo operando: ");
    scanf("%f", &operando);

    return operando;
}

int submenu (void)
{
    int opcionSubmenu;

    printf("Ingrese una opcion: ");
    scanf("%d", &opcionSubmenu);

    return opcionSubmenu;
}
