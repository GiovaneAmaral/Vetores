/*Fa ̧ca um programa que leia uma sequˆencia de 21 n ́umeros inteiros e armazene em um vetor.
Depois, determine se o  ́ultimo n ́umero lido est ́a presente nos 20 primeiros e mostre as
posi ̧c ̃oes do vetor em que ele se encontra.*/

#include <stdio.h>

int main() {
    int numeros[21];
    int ultimoNumero;
    int encontrado = 0; 

    printf("Digite 21 números inteiros:\n");
    for (int i = 0; i < 21; i++) {
        scanf("%d", &numeros[i]);
        if (i == 20) {
            ultimoNumero = numeros[i];         }
    }

    for (int i = 0; i < 20; i++) {
        if (numeros[i] == ultimoNumero) {
            encontrado = 1;
            printf("O último número %d está presente na posição %d.\n", ultimoNumero, i);
        }
    }

    if (!encontrado) {
        printf("O último número %d não foi encontrado nos 20 primeiros números.\n", ultimoNumero);
    }

    return 0;
}
