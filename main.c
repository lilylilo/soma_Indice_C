#include <stdio.h>

/* Observe o trecho de código abaixo: int INDICE = 12, SOMA = 0, K = 1; enquanto K < INDICE faça { K = K + 1; SOMA = SOMA + K; } imprimir(SOMA);

Ao final do processamento, qual será o valor da variável SOMA?
*/

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    // Enquanto K for menor que o valor de INDICE, execute o loop
    while (K < INDICE) {
        K = K + 1;   // Incrementa o valor de K
        SOMA = SOMA + K;  // Soma o valor de K à variável SOMA
    }

    // Imprime o valor final da variável SOMA
    printf("O valor final de SOMA é: %d\n", SOMA);

    return 0;
}
