#include <stdio.h>
#include <stdbool.h> // Para usar o tipo bool e as constantes true/false (é um tipo de dado usado para representar valores booleanos, com true e false como suas constantes.)
#include <string.h>  // Para usar a função strlen (é uma função que calcula o comprimento de uma string)
#include <stdlib.h>  // Para usar a função malloc ( é uma função que aloca dinamicamente memória no heap, sendo útil para estruturas de dados cujo tamanho é determinado em tempo de execução)
                    //  O heap permite que a memória seja alocada e liberada dinamicamente, ou seja, em tempo de execução, conforme as necessidades do programa
// Implementação da função que realiza a soma de dois números.
int soma(int a, int b) {
    return a + b; // Retorna a soma de a e b.
}

// Implementação da função que realiza a subtração de dois números.
int subtracao(int a, int b) {
    return a - b; // Retorna a subtração de a por b.
}

// Implementação da função que realiza a multiplicação de dois números.
int multiplicacao(int a, int b) {
    return a * b; // Retorna a multiplicação de a por b.
}

// Implementação da função que realiza a divisão de dois números.
int divisao(int a, int b) {
    return a / b; // Retorna a divisão de a por b. Atenção: isso é divisão inteira.
}

// Implementação da função que calcula o resto da divisão de dois números.
int resto(int a, int b) {
    return a % b; // Retorna o resto da divisão de a por b.
}


// Função para verificar se um número é par
bool eh_par(int numero) {
    return numero % 2 == 0;
}

// Função para verificar se um número é ímpar
bool eh_impar(int numero) {
    return numero % 2 != 0;
}

// Função para calcular o fatorial de um número
int fatorial(int numero) {
    int resultado = 1;
    for (int i = 1; i <= numero; i++) {
        resultado *= i;
    }
    return resultado;
}

// Função para verificar se um número é primo
bool eh_primo(int numero) {
    if (numero < 2) {
        return false;
    }
    for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para calcular a soma dos dígitos de um número
int soma_dos_digitos(int numero) {
    int soma = 0;
    while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
    }
    return soma;
}

// Função para calcular a soma de números em uma lista
int calcular_soma(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return soma;
}

// Função para verificar se um número é o maior de uma lista
bool eh_o_maior(int numero, int lista[], int tamanho) {
    int maior = lista[0];
    for (int i = 1; i < tamanho; i++) {
        if (lista[i] > maior) {
            maior = lista[i];
        }
    }
    return numero == maior;
}

// Função para verificar se um número é o menor de uma lista
bool eh_o_menor(int numero, int lista[], int tamanho) {
    int menor = lista[0];
    for (int i = 1; i < tamanho; i++) {
        if (lista[i] < menor) {
            menor = lista[i];
        }
    }
    return numero == menor;
}

// Função para calcular o tamanho de uma lista de números
int calcular_tamanho_lista(int lista[]) {
    int tamanho = 0;
    while (lista[tamanho] != '\0') {
        tamanho++;
    }
    return tamanho;
}

// Função para calcular área e perímetro de um retângulo
void retangulo(int lado1, int lado2, int *area, int *perimetro) {
    *area = lado1 * lado2;
    *perimetro = 2 * (lado1 + lado2);
}

// Função para calcular a área de um círculo
double circulo(double raio) {
    return 3.14 * raio * raio;
}

// Função para calcular a área de um triângulo
double triangulo(double base, double altura) {
    return (base * altura) / 2;
}

// Função para calcular a área de um trapézio
double trapezio(double base_menor, double base_maior, double altura) {
    return ((base_menor + base_maior) * altura) / 2;
}

// Função para calcular a área de um losango
double losango(double diagonal_maior, double diagonal_menor) {
    return (diagonal_maior * diagonal_menor) / 2;
}

// Função para calcular a área de um pentágono
double pentagono(double lado, double apotema) {
    return (5 * lado * apotema) / 2;
}

// Função para calcular a área de um hexágono
double hexagono(double lado) {
    return (3 * lado * lado * 1.73205080757) / 2; // 1.73205080757 é a raiz quadrada de 3
}

// Função para calcular a média de números em uma lista
double calcular_media(int numeros[], int tamanho) {
    int soma = calcular_soma(numeros, tamanho);
    return (double)soma / tamanho;
}

// Função para verificar se um CPF é válido
const char* cpfvalido(char cpf[]) {
    int tamanho = strlen(cpf);
    
    // Verifica se o CPF tem 11 dígitos
    if (tamanho != 11) {
        return "CPF inválido.";
    }

    int soma1 = 0, soma2 = 0, digito1, digito2;

    // Calcula o primeiro dígito verificador
    for (int i = 0; i < 9; i++) {
        soma1 += (cpf[i] - '0') * (10 - i);
    }
    digito1 = (soma1 * 10 % 11) % 10;

    // Calcula o segundo dígito verificador
    for (int i = 0; i < 10; i++) {
        soma2 += (cpf[i] - '0') * (11 - i);
    }
    digito2 = (soma2 * 10 % 11) % 10;

    // Verifica se os dígitos calculados são iguais aos fornecidos
    if (digito1 == (cpf[9] - '0') && digito2 == (cpf[10] - '0')) {
        return "CPF válido.";
    } else {
        return "CPF inválido.";
    }
}

// Função para calcular a sequência de Fibonacci
int* calcular_fibonacci(int n) {
    int* fibonacci = (int*)malloc(n * sizeof(int));  // Aloca memória para a sequência
    if (fibonacci == NULL) {
        return NULL;  // Verifica se a alocação foi bem-sucedida
    }

    fibonacci[0] = 0;
    if (n > 1) {
        fibonacci[1] = 1;
        for (int i = 2; i < n; i++) {
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];  // Calcula o próximo número da sequência
        }
    }

    return fibonacci;
}

