#include <stdio.h>
#include <locale.h>

// Algoritmo desenvolvido para a disciplina de Algoritmos e L�gica de Programa��o
// da FATEC Taquaritinga - Prof. Brazelino Neto - Discente: Jos� Guilherme Pandolfi

int main() {

    // Declarando vari�veis usadas
    int num, maior, menor, cont;

    // Instru��es ao usu�rio
    printf("Identificar o maior e o menor n�mero na sequ�ncia:\n\n");
    printf("Insira a seguir 10 n�meros inteiros:\n");

    // Recebendo o primeiro n�mero por fora do loop
    printf("N�mero 1: ");
    scanf("%i", &num);
    maior = num;
    menor = num;

    // Evitando lixo de mem�ria e setando contador do loop para 1
    cont = 1;

    // Recebendo os outros 9 n�meros restantes
    while (cont < 10) {
        printf("N�mero %i: ", cont+1);
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
    printf("\nO maior n�mero digitado foi %i e o menor n�mero digitado foi %i", maior, menor);

return 0;
}
