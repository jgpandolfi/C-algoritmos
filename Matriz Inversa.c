#include <stdio.h>
#include <locale.h>
#define lin 4
#define col 4

// Algoritmo desenvolvido para a disciplina de Algoritmos e Lógica de Programação
// da FATEC Taquaritinga - Prof. Brazelino Neto - Discente: José Guilherme Pandolfi

int main() {
    // Configurando a localidade para o idioma português do Brasil (pt_BR) e UTF-8
    setlocale(LC_ALL, "pt_BR.utf8");

    int m[lin][col];

    printf("Ler matriz %ix%i e apresentar uma nova matriz com posições invertidas:\n\n", lin, col);

    printf("Insira os valores dos itens da matriz:\n\n");
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++){
            printf("Insira a seguir o valor do item da linha %i e coluna %i:\n", i+1, j+1);
            scanf("%i", &m[i][j]);
        }
    }

    printf("\nExibindo a matriz original criada:");
    for (int i = 0; i < lin; i++) {
        printf("\n");
        for (int j = 0; j < col; j++) {
            if (j == col - 1) {
                printf("[ %i ]", m[i][j]);
            } else {
                printf("[ %i ], ", m[i][j]);
            }
        }
    }

    printf("\n\nExibindo matriz com as posições invertidas:");
    for (int i = lin - 1; i >= 0; i--) {
            printf("\n");
            for (int j = col - 1; j >= 0; j--) {
                if (j == 0) {
                    printf("[ %i ]", m[i][j]);
                } else {
                    printf("[ %i ], ", m[i][j]);
                }
            }
    }
    return 0;
}
