/*Fa ̧ca um programa que receba um vetor de 20 elementos e, em seguida, efetue a troca dos
10 primeiros elementos pelos 10  ́ultimos, exibindo ao final o vetor resultante.*/

#include <stdio.h>

int main() {
    int vetor[20];
    int temp;

    printf("Digite os 20 elementos do vetor:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        temp = vetor[i];
        vetor[i] = vetor[i + 10];
        vetor[i + 10] = temp;
    }

    printf("Vetor resultante após a troca:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
