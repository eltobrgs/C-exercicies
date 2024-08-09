#include <stdio.h>

int main() {
    int numero;

    // Exemplo de if
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é maior que dez
    if (numero > 10) {
        printf("O número %d é maior que dez.\n", numero);
    }

    // Exemplo de if-else
    if (numero % 2 == 0) {
        printf("O número %d é par.\n", numero);
    } else {
        printf("O número %d é ímpar.\n", numero);
    }

    // Exemplo de if-else if-else
    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }

    // Exemplo de switch
    int diaSemana;
    printf("Digite um número para o dia da semana (1-7): ");
    scanf("%d", &diaSemana);

    switch (diaSemana) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Dia inválido!\n");
            break;
    }

    return 0;
}
