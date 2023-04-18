#include <stdio.h>
#include <menu.h>

int main(int argc, char *argv[])

{
    float a = 0, b = 0, c = 0, d = 0, e = 0;
    float precio1, precio2, precio3, precio4, precio5;
    float subtotal = 0;
    float total = 0;
    char nombre[50];
    char cedula[20];
    char opcion;
    float siono = 1;
    int menu, menuu;
    float subtotal1 = 0, subtotal2 = 0, subtotal3 = 0, subtotal4 = 0, subtotal5 = 0;
    menu = 1;
    char enter;
    int factu;

    do
    {
        menuu = menuprincipal();

        switch (menuu)
        {
            opcion = menuprod();
        case 1:
            printf("-----Ingrese los datos de Facturacion-----\n");
            printf("Ingrese su nombre\n");
            scanf("%s", &nombre);
            printf("Ingrese su cedula\n");
            scanf("%s", &cedula);

            do
            {

                switch (opcion)
                {

                case 'a':
                    printf("Ingrese la cantidad de Llantas\n");
                    scanf("%f", &a);
                    break;

                case 'b':
                    printf("Ingrese la cantidad de Kits Pastillas de freno\n");
                    scanf("%f", &b);

                    break;

                case 'c':
                    printf("Ingrese la cantidad de Kits de embrague\n");
                    scanf("%f", &c);

                    break;

                case 'd':
                    printf("Ingrese la cantidad de Faros\n");
                    scanf("%f", &d);

                    break;

                case 'e':
                    printf("Ingrese la cantidad de Radiadores\n");
                    scanf("%f", &e);

                    break;
                }

                printf("¿Desea ingresar otro producto?\n");
                printf("1.- Si\n");
                printf("2.- No\n");
                fflush(stdin);
                scanf("%f", &siono);

            } while (siono != 2);

            if (siono == 2)
            {
                menu = 4;
            }
            break;

        case 2:

            if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0)
            {
                factu = 3;
            }
            if (a > 0 || b > 0 || c > 0 || d > 0 || e > 0)
            {
                factu = 4;
            }
            switch (factu)

            {

            case 3:
                printf("NO EXISTEN DATOS DE FACTURACION\n");
                printf("VOLVIENDO AL MENU\n");
                printf("\n");
                break;

            case 4:
                subtotal1 = precio1 * a;
                subtotal2 = precio2 * b;
                subtotal3 = precio3 * c;
                subtotal4 = precio4 * d;
                subtotal5 = precio5 * e;
                subtotal = subtotal1 + subtotal2 + subtotal3 + subtotal4 + subtotal5;
                total = descuento(subtotal);

                impresion(nombre, cedula, a,b,c,d,e,precio1,precio2,precio3,precio4,precio5,subtotal1,subtotal2,subtotal3,subtotal4,subtotal5,subtotal,total);
                menu = 2;

                break;
            }

            break;

        case 3:

            printf("\n");

            printf("\n");

            printf("Cerrando sesion");

            printf("\n");

            printf("\n");

            menu = 2;

            break;
        }

    } while (menu != 2);

    return 0;
}
