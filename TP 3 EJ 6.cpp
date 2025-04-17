#include <stdio.h>

int contarOcurrencias(int *arr, int tam, int valor) {
    int contador = 0;
    for (int i = 0; i < tam; i++) {
        if (*(arr + i) == valor) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int arreglo[100], n, buscar;

    printf("INGRESE LA CANTIDAD DE NUMEROS: ");
    scanf("%d", &n);

    printf("INGRESE LOS %d NUMEROS:\n", n);
    for (int i = 0; i < n; i++) {
        printf("NUMERO %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    printf("INGRESE EL NUMERO A BUSCAR: ");
    scanf("%d", &buscar);

    int ocurrencias = contarOcurrencias(arreglo, n, buscar);

    printf("\nEL NUMERO %d APARECE %d VECES.\n", buscar, ocurrencias);

    return 0;
}

