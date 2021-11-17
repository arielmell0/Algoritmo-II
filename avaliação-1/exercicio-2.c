// Escreva uma função em C que calcule quantos dias tem entre duas datas de um
// mesmo ano (dia, Mês)
// Crie um programa para usar a função

# include <stdio.h>
# include <locale.h>

int difData(int data1[2], int data2[2]) {
    int difDias = data1[0] - data2[0];
    int difMeses = data1[1] - data2[1];

    int totalDias = (difMeses * 30) + difDias;
    
    return totalDias;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int data1[2], data2[2];

    printf("Calculo de diferença de datas\n--------------------------------\n\n");

    printf("Digite uma data inicial\nDia: ");scanf("%i", &data1[0]);
    printf("Mes: ");scanf("%i", &data1[1]);

    printf("Digite uma data final\nDia: ");scanf("%i", &data2[0]);
    printf("Mes: ");scanf("%i", &data2[1]);

    if(difData(data1, data2) == 1 || difData(data1, data2) == -1){
        printf("%d"" dia de diferença.", difData(data1, data2));
    } else {
        printf("%d"" dias de diferença.", difData(data1, data2));
    }

    return 0;
}