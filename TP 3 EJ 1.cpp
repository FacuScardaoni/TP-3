//Intercambiar el valor de dos variables usando punteros y funciones. 
//Mostrando los valores iniciales y valores finales.
#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("INGRESE EL VALOR DE LA VARIABLE x: ");
    scanf("%d", &x);

    printf("INGRESE EL VALOR DE LA VARIABLE y: ");
    scanf("%d", &y);

    printf("\nVALORES INICIALES:\n");
    printf("x = %d, y = %d\n", x, y);

    intercambiar(&x, &y);

    printf("\nVALORES INTERCAMBIADOS:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}

