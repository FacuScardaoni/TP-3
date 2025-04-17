//Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando el resultado final.
#include <stdio.h>

void copiarArreglo(int *origen, int *destino, int tam) {
    for (int i = 0; i < tam; i++) {
        *(destino + i) = *(origen + i);
    }
}

int main() {
    int array1[100], array2[100], n;

    printf("INGRESE LA CANTIDAD DE NUMEROS: ");
    scanf("%d", &n);

    printf("INGRESE LOS %d NUMEROS DEL ARREGLO ORIGINAL:\n", n);
    for (int i = 0; i < n; i++) {
        printf("NUMERO %d: ", i + 1);
        scanf("%d", &array1[i]);
    }

    copiarArreglo(array1, array2, n);

    printf("\nCONTENIDO DEL ARREGLO COPIADO:\n");
    for (int i = 0; i < n; i++) {
        printf("NUMERO %d: %d\n", i + 1, array2[i]);
    }

    return 0;
}

