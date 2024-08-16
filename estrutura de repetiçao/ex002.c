#include <stdio.h>

int main() {
    // Início do loop for
    // O loop começa com a variável i igual a 1
    // A condição é i <= 10, ou seja, o loop continuará enquanto i for menor ou igual a 10
    // Após cada iteração, i é incrementado em 1 (i++)
    for (int i = 1; i <= 10; i++) {
        printf("Número: %d\n", i); // Imprime o número antes de verificar se é par ou ímpar
        if (i % 2 == 0) {
            // Se o número é par, imprime "Par"
            printf("Par\n");
        } else {
            // Se o número é ímpar, imprime "Ímpar"
            printf("Ímpar\n");
        }
    }

    // Fim do loop for
    // Quando i se torna maior que 10, o loop termina e o programa continua após o for

    return 0; // Indica que o programa terminou com sucesso
}
