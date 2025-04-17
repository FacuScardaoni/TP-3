//Encontrar la suma y el promedio de los elementos de un arreglo usando punteros y funciones.
#include <stdio.h>

int calcularSuma(int *arr, int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += *(arr + i); 
    }
    return suma;
}

float calcularPromedio(int *arr, int tam) {
    int suma = calcularSuma(arr, tam);
    return (float)suma / tam;
}

int main() {
    int arreglo[100], n;

    printf("INGRESE LA CANTIDAD DE NUMEROS:  ");
    scanf("%d", &n);

    printf("INGRESE LOS %d NUMEROS:\n", n);
    for (int i = 0; i < n; i++) {
        printf("NUMERO %d: ", i + 1);
        scanf("%d", &arreglo[i]);
    }

    int suma = calcularSuma(arreglo, n);
    float promedio = calcularPromedio(arreglo, n);

    printf("\nSUMA = %d\n", suma);
    printf("PROMEDIO = %.2f\n", promedio);

    return 0;
}

