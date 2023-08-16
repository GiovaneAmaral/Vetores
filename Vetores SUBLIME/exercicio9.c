/*Fa ̧ca um programa receba a idade de v ́arias pessoas e armazene em um vetor, em seguida,
contabilize e mostre o total de pessoas com menos de 18 anos e o total com mais de 30
anos. O programa deve ser encerrado quando for digitado o valor 0.*/

#include <stdio.h>

void bubbleSort(float vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
              
                float temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vetor[n];

    printf("Digite os números do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor[i]);
    }

    bubbleSort(vetor, n);

    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
