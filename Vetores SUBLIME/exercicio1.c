/*Fa ̧ca um programa que leia uma sequˆencia de n ́umeros qualquer e armazene em um vetor,
em seguida, implemente uma fun ̧c ̃ao que contabilize e retorne o total de ocorrˆencias do
 ́ultimo n ́umero lido desta sequˆencia.*/

#include <stdio.h>
#include <stdlib.h>

int contarOcorrencias(int vetor[], int tamanho, int numero) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == numero) {
            contador++;
        }
    }
    return contador;
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

    int ultimoNumero = vetor[n - 1];
    int totalOcorrencias = contarOcorrencias(vetor, n, ultimoNumero);

    printf("O último número lido é %d e ocorre %d vezes na sequência.\n", ultimoNumero, totalOcorrencias);

    return 0;
    
}
