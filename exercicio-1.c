// Escreva uma função em C que calcule o fatorial de um número inteiro.
// Crie um programa que use essa função

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
    printf("Calculo de fatorial\n---------------------\n\nDigite aqui um número: ");
    scanf("%i", &fatInput);

	printf("%d""! = ""%d",fatInput, fact(fatInput));

	return 0;
}