#include <stdio.h> // Biblioteca padrão de entrada e saída

int main() {
    int num1, num2, num3; // Declaração de três variáveis inteiras
    printf("Digite três números inteiros: "); // Solicita ao usuário que digite três números inteiros
    scanf("%d %d %d", &num1, &num2, &num3); // Lê os três números inteiros digitados pelo usuário e os armazena nas variáveis num1, num2 e num3
    
    // Cálculo da soma e da divisão
    int soma = num1 + num2 + num3;
    int divisao = soma / 3;
    
    // Impressão dos resultados
    printf("Soma: %d\n", soma);
    printf("Divisão: %d\n", divisao);
    
    return 0; // Indica que o programa terminou com sucesso
}
