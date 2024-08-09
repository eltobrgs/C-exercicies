#include <stdio.h> // Biblioteca padrão de entrada e saída

void main() {
    short int num; // Declaração de uma variável inteira
    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro
    scanf("%d", &num); // Lê o número inteiro digitado pelo usuário e o armazena na variável num
    
    // Cálculo do quadrado do número
    short int quadrado = num * num;
    printf("Quadrado: %d\n", quadrado); // Imprime o quadrado do número
    
    // Multiplicação do resultado pelo número original por 3
    short int resultado = quadrado * 3;
    printf("Resultado multiplicado por 3: %d\n", resultado); // Imprime o resultado final
    
}
