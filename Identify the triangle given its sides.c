#include <stdio.h>
#include <conio.h>
int main(void) {
    //Declarar variables
    int l1, l2, l3;

    //Petici�n de variables
    printf("Clasificaci�n de un triangulo\n\n");
    printf("Escriba el valor del lado 1: ");
    scanf("%d", &l1);
    printf("\nEscriba el valor del lado 2: ");
    scanf("%d", &l2);
    printf("\nEscriba el valor del lado 3: ");
    scanf("%d", &l3);
    printf("\n");
    if ((l1==l2) && (l2==l3)) {
        printf(" | El triangulo es Equilatero | \n");
    }
    else {
    if (l1==l2 || l2==l3 || l1==l3) {

        printf(" | El triangulo es Is�sceles | \n");

    } else {
        printf(" | El triangulo es Escaleno | \n");
        }
    }
}
