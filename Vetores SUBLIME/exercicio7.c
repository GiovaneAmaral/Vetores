/*Fa ̧ca um programa que receba do usu ́ario um vetor de “n” n ́umeros inteiros, em seguida,
implemente uma fun ̧c ̃ao que determine e retorne o maior valor do vetor lido.*/

#include <stdio.h>

int encontrarMaiorValor(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os números do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int maiorValor = encontrarMaiorValor(vetor, n);

    printf("O maior valor do vetor é: %d\n", maiorValor);

    return 0;
}
