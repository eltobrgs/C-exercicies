#include <stdio.h>

int main() {
    // Operadores aritméticos
    int a = 10;
    int b = 3;
    int resultado;

    // Adição
    resultado = a + b;
    printf("Adição: %d\n", resultado);

    // Subtração
    resultado = a - b;
    printf("Subtração: %d\n", resultado);

    // Multiplicação
    resultado = a * b;
    printf("Multiplicação: %d\n", resultado);

    // Divisão (resultado será truncado, pois estamos usando inteiros)
    resultado = a / b;
    printf("Divisão: %d\n", resultado);

    // Módulo (resto da divisão)
    resultado = a % b;
    printf("Módulo: %d\n", resultado);

    // Operadores lógicos
    int x = 5;
    int y = 7;
    int z = 3;
    int resultado_logico;

    // Operador AND lógico (retorna 1 se ambas as condições forem verdadeiras)
    resultado_logico = (x > y) && (y > z);
    printf("AND lógico: %d\n", resultado_logico);

    // Operador OR lógico (retorna 1 se pelo menos uma condição for verdadeira)
    resultado_logico = (x > y) || (y > z);
    printf("OR lógico: %d\n", resultado_logico);

    // Operador NOT lógico (inverte o valor lógico)
    resultado_logico = !(x > y);
    printf("NOT lógico: %d\n", resultado_logico);

    // Operadores de atribuição
    int c = 10;
    int d = 5;

    // Atribuição de adição (c = c + d)
    c += d;
    printf("Atribuição de adição: %d\n", c);

    // Atribuição de subtração (c = c - d)
    c -= d;
    printf("Atribuição de subtração: %d\n", c);

    // Atribuição de multiplicação (c = c * d)
    c *= d;
    printf("Atribuição de multiplicação: %d\n", c);

    // Atribuição de divisão (c = c / d)
    c /= d;
    printf("Atribuição de divisão: %d\n", c);

    // Atribuição de módulo (c = c % d)
    c %= d;
    printf("Atribuição de módulo: %d\n", c);

    // Operadores de incremento e decremento
    int e = 5;

    // Incremento (pré-incremento: incrementa e depois usa o valor)
    printf("Pré-incremento: %d\n", ++e);

    // Incremento (pós-incremento: usa o valor e depois incrementa)
    printf("Pós-incremento: %d\n", e++); // Imprime o valor antes do incremento
    printf("Valor após pós-incremento: %d\n", e); // Mostra o valor depois do incremento

    // Decremento (pré-decremento: decrementa e depois usa o valor)
    printf("Pré-decremento: %d\n", --e);

    // Decremento (pós-decremento: usa o valor e depois decrementa)
    printf("Pós-decremento: %d\n", e--); // Imprime o valor antes do decremento
    printf("Valor após pós-decremento: %d\n", e); // Mostra o valor depois do decremento

    // Operadores bitwise
    int f = 2;
    int resultado_bitwise;

    // Operador bitwise AND (compara bit a bit e retorna 1 se ambos os bits forem 1)
    resultado_bitwise = e & f;
    printf("Operador bitwise AND: %d\n", resultado_bitwise);

    // Operador bitwise OR (compara bit a bit e retorna 1 se pelo menos um dos bits for 1)
    resultado_bitwise = e | f;
    printf("Operador bitwise OR: %d\n", resultado_bitwise);

    // Operador bitwise XOR (compara bit a bit e retorna 1 se os bits forem diferentes)
    resultado_bitwise = e ^ f;
    printf("Operador bitwise XOR: %d\n", resultado_bitwise);

    // Operador bitwise NOT (inverte todos os bits)
    resultado_bitwise = ~e;
    printf("Operador bitwise NOT: %d\n", resultado_bitwise);

    // Operador bitwise shift left (desloca os bits para a esquerda)
    resultado_bitwise = e << 1;
    printf("Operador bitwise shift left: %d\n", resultado_bitwise);

    // Operador bitwise shift right (desloca os bits para a direita)
    resultado_bitwise = e >> 1;
    printf("Operador bitwise shift right: %d\n", resultado_bitwise);
    
    return 0;
}
