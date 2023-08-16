/*Fa ̧ca um programa que leia 50 n ́umeros inteiros e armazene em um vetor. Em seguida,
armazene os n ́umeros pares no vetor chamado par e os n ́umeros  ́ımpares no vetor  ́ımpar.
Imprima os dois vetores resultante.*/

#include <stdio.h>

int main() {
    int numeros[50];
    int par[50], impar[50]; 
    int numPares = 0, numImpares = 0; 

    printf("Digite 50 números inteiros:\n");
    for (int i = 0; i < 50; i++) {
        scanf("%d", &numeros[i]);
        
        if (numeros[i] % 2 == 0) {
            par[numPares] = numeros[i];
            numPares++;
        } else {
            impar[numImpares] = numeros[i];
            numImpares++;
        }
    }

    printf("Números pares:\n");
    for (int i = 0; i < numPares; i++) {
        printf("%d ", par[i]);
    }
    printf("\n");

    printf("Números ímpares:\n");
    for (int i = 0; i < numImpares; i++) {
        printf("%d ", impar[i]);
    }
    printf("\n");

    return 0;
}
