#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Tipo: int | Tamanho: %d bytes\n", sizeof(int));
    printf("Tipo: char | Tamanho: %d byte\n", sizeof(char));
    printf("Tipo: float| Tamanho: %d bytes\n", sizeof(float));
    printf("Tipo: double | Tamanho: %d bytes\n", sizeof(double));

    return 0;
}