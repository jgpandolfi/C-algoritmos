#include <stdio.h>
#include <locale.h>

// Algoritmo desenvolvido para a disciplina de Algoritmos e Lógica de Programação
// da FATEC Taquaritinga - Prof. Brazelino Neto - Discente: José Guilherme Pandolfi

int main() {
    // Configurando a localidade para o idioma português do Brasil (pt_BR) e UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    // Declarando variáveis
    int num, restos;

    // Instruções ao usuário
    printf("Verificador de número primo:\n\n");
    printf("Insira a seguir o número que você deseja verificar se é primo:\n");
    scanf("%i", &num);

    // Tirando lixo de memória e setando restos para 0
    restos = 0;

    // Setando contador do loop para 1

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            // Se o resultado da divisão for um número inteiro
            restos++;
        }
        if (restos > 3){
            // Se houver mais de 3 resultados inteiros, não precisamos continuar
            i = num + 1;
        }
    }
    if (restos > 2){
        printf("O número %i não é primo!\n", num);
    } else {
        printf("O número %i é primo!\n", num);
    }
    return 0;
}
