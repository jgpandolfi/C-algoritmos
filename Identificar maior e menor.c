#include <stdio.h>
#include <locale.h>

// Algoritmo desenvolvido para a disciplina de Algoritmos e Lógica de Programação
// da FATEC Taquaritinga - Prof. Brazelino Neto - Discente: José Guilherme Pandolfi

int main() {

    // Declarando variáveis usadas
    int num, maior, menor, cont;

    // Instruções ao usuário
    printf("Identificar o maior e o menor número na sequência:\n\n");
    printf("Insira a seguir 10 números inteiros:\n");

    // Recebendo o primeiro número por fora do loop
    printf("Número 1: ");
    scanf("%i", &num);
    maior = num;
    menor = num;

    // Evitando lixo de memória e setando contador do loop para 1
    cont = 1;

    // Recebendo os outros 9 números restantes
    while (cont < 10) {
        printf("Número %i: ", cont+1);
        scanf("%i", &num);
        // Verificar se precisa alterar o maior ou menor
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
        cont++;
    }

    // Apresentando o resultado
    printf("\nO maior número digitado foi %i e o menor número digitado foi %i", maior, menor);

return 0;
}
