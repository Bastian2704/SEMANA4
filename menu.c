#include <stdio.h>
#include "menu.h"


int menuprincipal()
{
    int menuu;
    printf("-----MENU-----\n");
    printf("Elija una opcion:\n");
    printf("1.- Facturar producto/s\n");
    printf("2.- Imprimir factura\n");
    printf("3.- Salir\n");
    scanf("%d", &menuu);
    return menuu;
}
char menuprod()
{
    printf("a.- Llantas\n");
    char opcion;
    printf("b.- Kit Pastillas de freno\n");
    printf("c.- Kit de embrague\n");
    printf("d.- Faro\n");
    printf("e.- Radiador\n");
    fflush(stdin);
    scanf("%c", &opcion);
    return opcion;
}
float descuento(float subtotal)
{
    float precio1 = 150;
    float precio2 = 55;
    float precio3 = 180;
    float precio4 = 70;
    float precio5 = 120;
    float total;
    if (subtotal <= 1000 && subtotal > 500)
    {
        total = subtotal - subtotal * 0.07;
    }
    if (subtotal > 100 && subtotal <= 500)
    {
        total = subtotal - subtotal * .05;
    }
    if (subtotal > 999)
    {
        total = subtotal - subtotal * 0.1;
    }
    return total;
}

void impresion(char nombre[], char cedula[], float a, float b, float c, float d, float e,
               float precio1, float precio2, float precio3, float precio4, float precio5,
               float subtotal1, float subtotal2, float subtotal3, float subtotal4,
               float subtotal5, float subtotal, float total)
{
    printf("\n");
    printf("\n");
    printf("---------------------------------FACTURA---------------------------------\n");
    printf("\n");
    printf("Nombre: %s\n", nombre);
    printf("Cedula: %s\n", cedula);
    printf("\n");
    printf("Articulo                    Cantidad     Precio Unitario      Valor\n");
    if (a > 0)
    {
        printf("LLanta                      %.0f             %.2f             %.2f\n", a, precio1, subtotal1);
    }

    if (b > 0)

    {

        printf("Pastillas de Frenos            %.0f             %.2f             %.2f\n", b, precio2, subtotal2);
    }

    if (c > 0)

    {

        printf("Kit embrague                  %.0f             %.2f             %.2f\n", c, precio3, subtotal3);
    }

    if (d > 0)

    {

        printf("Faros                         %.0f             %.2f             %.2f\n", d, precio4, subtotal4);
    }

    if (e > 0)

    {

        printf("Radiadores                    %.0f             %.2f             %.2f\n", e, precio5, subtotal5);
    }

    printf("Subtotal: %.2f\n", subtotal);
    printf("Descuento: %.2f\n", -total + subtotal);
    printf("Total: %.2f\n", total);
    printf("\n");
    printf("\n");
    printf("-------------------------------------------------------------------------\n");
}