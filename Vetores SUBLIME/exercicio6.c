/*Fa ̧ca um programa que leia uma sequˆencia de n ́umeros inteiros e armazene em um vetor.
Em seguida, implemente uma fun ̧c ̃ao que determine e mostre os n ́umeros do vetor que s ̃ao
m ́ultiplos de 7.*/

#include <stdio.h>

void mostrarMultiplosDeSete(int vetor[], int tamanho) {
    printf("Números múltiplos de 7 no vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 7 == 0) {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite o tamanho da sequência de números: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os números da sequência:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    mostrarMultiplosDeSete(vetor, n);

    return 0;
}
