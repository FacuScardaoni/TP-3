#include <stdio.h>

void concatenar(char *destino, char *origen) {
    while (*destino != '\0') {
        destino++;
    }

    while (*origen != '\0') {
        *destino = *origen;
        destino++;
        origen++;
    }

    *destino = '\0';
}

int main() {
    char cadena1[200], cadena2[100];

    printf("INGRESE LA CADENA 1: ");
    fgets(cadena1, sizeof(cadena1), stdin);

    printf("INGRESE LA CADENA 2: ");
    fgets(cadena2, sizeof(cadena2), stdin);

    for (int i = 0; cadena1[i] != '\0'; i++) {
        if (cadena1[i]== '\n') {
            cadena1[i] = '\0';
            break;
        }
    }

    for (int i = 0; cadena2[i] != '\0'; i++) {
        if (cadena2[i]== '\n') {
            cadena2[i] ='\0';
            break;
        }
    }

    concatenar(cadena1, cadena2);

    printf("\nCADENA FINAL: %s\n", cadena1);

    return 0;
}

