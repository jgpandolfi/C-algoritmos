#include <stdio.h>
#include <locale.h>

// Algoritmo desenvolvido para a disciplina de Algoritmos e L�gica de Programa��o
// da FATEC Taquaritinga - Prof. Brazelino Neto

int calcTabuada(int pNum, int pCont) {
    int res;
    res = pNum * pCont;
    return res;
}

int main() {
    // Configurando a localidade para o idioma portugu�s do Brasil (pt_BR) e UTF-8
    setlocale(LC_ALL, "pt_BR.utf8");

    printf("Calculadora de Tabuada com uso do While:\n");

    // Declara��o das vari�veis a serem utilizadas
    int num, cont;
    cont = 1;

    printf("Insira a seguir o n�mero que voc� deseja calcular a tabuada:\n");
    scanf("%i", &num);

    printf("\nTabuada de %i:\n", num);

    while (cont<=10) {
        printf("%i x %i = %i\n", num, cont, calcTabuada(num, cont));
        cont++;
    }
}
