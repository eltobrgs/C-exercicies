#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário para inserir a idade
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Verifica se a idade é válida
    if (idade < 0) {
        printf("Idade inválida\n");
    } else if (idade <= 3) {
        printf("Você é um bebê\n");
    } else if (idade <= 12) {
        printf("Você é uma criança\n");
    } else if (idade <= 17) {
        printf("Você é um adolescente\n");
    } else if (idade <= 24) {
        printf("Você é um jovem adulto\n");
    } else if (idade <= 39) {
        printf("Você é um adulto\n");
    } else if (idade <= 59) {
        printf("Você é de meia-idade\n");
    } else if (idade <= 74) {
        printf("Você é um idoso\n");
    } else if (idade <= 89) {
        printf("Você é um idoso de longa vida\n");
    } else {
        printf("Você é um idoso muito longevo\n");
    }

    return 0;
}
