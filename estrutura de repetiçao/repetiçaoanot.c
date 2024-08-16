#include <stdio.h>

int main() {
    int i; // Declaração da variável de controle

    // Loop for que imprime os números de 1 a 10
    for (i = 1; i <= 10; i++) {
        printf("%d ", i); // Imprime o valor atual de i
    }

    printf("\n"); // Pula uma linha

    // Loop while que imprime os números de 10 a 1
    i = 10; // Reinicializa a variável de controle
    while (i >= 1) {
        printf("%d ", i); // Imprime o valor atual de i
        i--; // Decrementa o valor de i
    }

    printf("\n"); // Pula uma linha

    // Loop do-while que imprime os números de 1 a 5
    i = 1; // Reinicializa a variável de controle
    do {
        printf("%d ", i); // Imprime o valor atual de i
        i++; // Incrementa o valor de i
    } while (i <= 5);

    return 0;
}