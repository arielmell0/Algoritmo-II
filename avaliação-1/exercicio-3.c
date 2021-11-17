// Escreva uma função que retorne 0 se o número for par e 1 se for ímpar.
// crie um programa que use essa função

#include <stdio.h>
#include <locale.h>

int parImpar(int n) {
    if (n % 2 == 0) {
        return printf("Número é par");
    } else {
        return printf("Número é ímpar");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Descubra se é par ou ímpar\n----------------------------\n");
    printf("Digite um número: ");
    scanf("%i", &n);

    printf("%c", parImpar(n));

    return 0;
}
