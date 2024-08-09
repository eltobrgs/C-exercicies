
/*Questão 4:
Escreva um programa em C que leia dois números inteiros do usuário. Calcule a soma dos dois números e, em seguida, 
divida a soma pelo maior desses números. Depois, multiplique o resultado pelo menor número. Por fim, imprima o resultado na tela.*/

#include <stdio.h> // Biblioteca padrão de entrada e saída

void main() {
    short int num1, num2; // Declaração de duas variáveis inteiras
    printf("Digite dois números inteiros: "); // Solicita ao usuário que digite dois números inteiros
    scanf("%d %d", &num1, &num2); // Lê os dois números inteiros digitados pelo usuário e os armazena nas variáveis num1 e num2
    
    // Cálculo da soma dos números
    short int soma = num1 + num2;
    
    // Determinação do maior e do menor número
    short int maior = (num1 > num2) ? num1 : num2;
    short int menor = (num1 < num2) ? num1 : num2;
    
    // Cálculo da divisão da soma pelo maior número e multiplicação do resultado pelo menor número
    short int divisao = soma / maior;
    short int resultado = divisao * menor;
    
    printf("Resultado final: %d\n", resultado); // Imprime o resultado final
    
}
