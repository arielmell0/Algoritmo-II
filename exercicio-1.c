// Escreva uma fun��o em C que calcule o fatorial de um n�mero inteiro.
// Crie um programa que use essa fun��o

#include <stdio.h>
#include <locale.h>

int fact(int x) {
	if (x == 1) 
		return 1;
	else
		return x * fact(x - 1);
}

int main() {
	setlocale(LC_ALL, "Portuguese");
    int fatInput;
    printf("Calculo de fatorial\n---------------------\n\nDigite aqui um n�mero: ");
    scanf("%i", &fatInput);

	printf("%d""! = ""%d",fatInput, fact(fatInput));

	return 0;
}