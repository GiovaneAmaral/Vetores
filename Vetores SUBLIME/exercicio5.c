/*Fa ̧ca um programa em leia uma sequˆencia de n ́umeros e armazene em um vetor. Em
seguida, determine e mostre quantos n ́umeros lidos est ̃ao dentro do intervalo entre 10 e 50.
O programa deve ser encerrado quando for lido o n ́umero -1.*/

#include <stdio.h>

int main() {
    int vetor[100]; 
    int numero, contador = 0; 
    int indice = 0; 

    printf("Digite uma sequência de números (-1 para encerrar):\n");

    do {
        scanf("%d", &numero);
        
        if (numero != -1) {
            vetor[indice] = numero;
            indice++;

            if (numero >= 10 && numero <= 50) {
                contador++;
            }
        }
    } while (numero != -1);

    printf("Quantidade de números entre 10 e 50: %d\n", contador);

    return 0;
}
