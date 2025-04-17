//Encontrar el mayor y el menor elemento de un arreglo usando punteros y  funciones.
#include <stdio.h>

int encontrarMayor(int *arr, int tam) {
    int mayor = *arr;
    for (int i = 1; i < tam; i++) {
        if (*(arr + i) > mayor) {
            mayor = *(arr + i);
        }
    }
    return mayor;
}

int encontrarMenor(int *arr, int tam) {
    int menor = *arr;
    for (int i = 1; i < tam; i++) {
        if (*(arr + i) < menor) {
            menor = *(arr + i);
        }
    }
    return menor;
}

int main() {
    int arreglo[100], n;

    printf("INGRESE LA CANTIDAD DE NUMEROS: ");
    scanf("%d", &n);

    // Cargar el arreglo
    printf("INGRESE LOS %d NUMEROS:\n", n);
    for (int i = 0; i < n; i++) {
        printf("NUMERO %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    // Encontrar el mayor y menor
    int mayor = encontrarMayor(arreglo, n);
    int menor = encontrarMenor(arreglo, n);

    // Mostrar resultados
    printf("\nNUMERO MAYOR = %d\n", mayor);
    printf("NUMERO MENOR = %d\n", menor);

    return 0;
}

