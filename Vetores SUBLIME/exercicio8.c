/*Fa ̧ca um programa receba a idade de v ́arias pessoas e armazene em um vetor, em seguida,
contabilize e mostre o total de pessoas com menos de 18 anos e o total com mais de 30
anos. O programa deve ser encerrado quando for digitado o valor 0.*/

#include <stdio.h>

int main() {
    int idades[100]; 
    int idade, numMenos18 = 0, numMais30 = 0; 

    printf("Digite as idades das pessoas (digite 0 para encerrar):\n");

    do {
        scanf("%d", &idade);
        
        if (idade < 0) {
            printf("Idade inválida! Insira novamente: ");
        } else if (idade < 18 && idade > 0) {
            numMenos18++;
        } else if (idade > 30) {
            numMais30++;
        }
        
    } while (idade != 0);

    printf("Total de pessoas com menos de 18 anos: %d\n", numMenos18);
    printf("Total de pessoas com mais de 30 anos: %d\n", numMais30);

    return 0;
}
