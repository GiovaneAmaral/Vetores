/*Fa ̧ca um programa que receba do usu ́ario um vetor de “n” n ́umeros inteiros e, em seguida,
imprima o vetor na ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os números do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor na ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
