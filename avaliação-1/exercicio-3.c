// Escreva uma fun��o que retorne 0 se o n�mero for par e 1 se for �mpar.
// crie um programa que use essa fun��o

#include <stdio.h>
#include <locale.h>

int parImpar(int n) {
    if (n % 2 == 0) {
        return printf("N�mero � par");
    } else {
        return printf("N�mero � �mpar");
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    printf("Descubra se � par ou �mpar\n----------------------------\n");
    printf("Digite um n�mero: ");
    scanf("%i", &n);

    printf("%c", parImpar(n));

    return 0;
}
