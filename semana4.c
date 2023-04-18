#include <stdio.h> 

 
 

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

 
 

        printf("-----MENU-----\n"); 

        printf("Elija una opcion:\n"); 

        printf("1.- Facturar producto/s\n"); 

        printf("2.- Imprimir factura\n"); 

        printf("3.- Salir\n"); 

        scanf("%d", &menuu); 

 
 

        switch (menuu) 

        { 

 
 

        case 1: 

 
 

            printf("-----Ingrese los datos de Facturacion-----\n"); 

 
 

            printf("Ingrese su nombre\n"); 

 
 

            scanf("%s", &nombre); 

 
 

            printf("Ingrese su cedula\n"); 

 
 

            scanf("%s", &cedula); 

 
 

            do 

 
 

            { 

 
 

                printf("a.- Llantas\n"); 

 
 

                printf("b.- Kit Pastillas de freno\n"); 

 
 

                printf("c.- Kit de embrague\n"); 

 
 

                printf("d.- Faro\n"); 

 
 

                printf("e.- Radiador\n"); 

 
 

                fflush(stdin); 

 
 

                scanf("%c", &opcion); 

 
 

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

                precio1 = 150; 

                precio2 = 55; 

                precio3 = 180; 

                precio4 = 70; 

                precio5 = 120; 

                subtotal1 = precio1 * a; 

                subtotal2 = precio2 * b; 

                subtotal3 = precio3 * c; 

                subtotal4 = precio4 * d; 

                subtotal5 = precio5 * e; 

                subtotal = subtotal1 + subtotal2 + subtotal3 + subtotal4 + subtotal5; 

                total = subtotal; 

                if (subtotal <= 1000 && subtotal > 500) 

                { 

                    total = subtotal - subtotal * 0.07; 

                } 

                else if (subtotal > 100 && subtotal <= 500) 

                { 

                    total = subtotal - subtotal * .05; 

                } 

                else if (subtotal > 999) 

                { 

                    total = subtotal - subtotal * 0.1; 

                } 

 
 

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