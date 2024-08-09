#include <stdio.h> //biblioteca padrao de entrada e saida 
 //Questão 1:
//Escreva um programa em C que leia dois números inteiros do usuário e calcule a soma, subtração, multiplicação, divisão 
//e o módulo desses números. Imprima os resultados na tela.

void main() {
    short int a = 10;
    short int b = 5;
    
    // Operador de adição
    short int soma = a + b;
    printf("A soma de a e b é: %d\n", soma);
    
    // Operador de subtração
    short int subtracao = a - b;
    printf("A subtração de a e b é: %d\n", subtracao);
    
    // Operador de multiplicação
    short int multiplicacao = a * b;
    printf("A multiplicação de a e b é: %d\n", multiplicacao);
    
    // Operador de divisão
    short int divisao = a / b;
    printf("A divisão de a por b é: %d\n", divisao);
    
    // Operador de resto da divisão
    short int resto = a % b;
    printf("O resto da divisão de a por b é: %d\n", resto);
    
    // Operador de incremento
    a++;
    printf("O valor de a após o incremento é: %d\n", a);
    a--;
    printf("O valor de a após o decremento é: %d\n", a);
}
