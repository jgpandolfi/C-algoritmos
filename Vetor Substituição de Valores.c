#include <stdio.h>
#include <locale.h>
#define max 20

// Algoritmo desenvolvido para a disciplina de Algoritmos e Lógica de Programação
// da FATEC Taquaritinga - Prof. Brazelino Neto - Discente: José Guilherme Pandolfi

// Leia um vetor de 20 posilçoes e atribua o valor 0 para todos os elementos que
// possuírem valroes negativos. Em seguida mostre o vetor original e o vetor alterado.

exibirVetor(int vetor[], int tam) {
    for (int i = 0; i < tam; i++) {
        if (i == tam - 1) {
            printf("%i\n", vetor[i]);
        } else {
            printf("%i, ", vetor[i]);
        }
    }
}

int main() {
    // Configurando a localidade para o idioma português do Brasil (pt_BR) e UTF-8
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int v[max];

    printf("A seguir, insira 20 valores para preencher o vetor:\n");

    // Recebe variáveis para preencher o vetor
    for (int i = 0; i < max; i++) {
        printf("\nValor para o item %i: ", i+1);
        scanf("%i", &v[i]);
    }

    // Exibe o vetor original
    printf("\nVetor original:\n");
    exibirVetor(v, max);

    // Substitui os valores negativos do vetor por 0
    for (int i = 0; i < max; i++) {
        if (v[i] <0) {
            v[i] = 0;
        }
    }

    // Exibe o vetor alterado
    printf("\nVetor alterado:\n");
    exibirVetor(v, max);

    return 0;
}
