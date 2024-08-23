#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída para usar funções como printf.
#include "mylibraly.h" // a do professor nao funciona, a minha sim

int main()
{
    // Declaração e inicialização das variáveis.
    int num1 = 5; // Primeiro número a ser usado nas operações.
    int num2 = 3; // Segundo número a ser usado nas operações.
    int resultado_soma, resultado_subtracao, resultado_multiplicacao, resultado_divisao, resultado_resto;

    // Chama a função soma e armazena o resultado em resultado_soma.
    resultado_soma = soma(num1, num2);
    // Chama a função subtracao e armazena o resultado em resultado_subtracao.
    resultado_subtracao = subtracao(num1, num2);
    // Chama a função multiplicacao e armazena o resultado em resultado_multiplicacao.
    resultado_multiplicacao = multiplicacao(num1, num2);
    // Chama a função divisao e armazena o resultado em resultado_divisao.
    resultado_divisao = divisao(num1, num2);
    // Chama a função resto e armazena o resultado em resultado_resto.
    resultado_resto = resto(num1, num2);

    // Exibe os resultados das operações matemáticas no console.
    printf("A soma de %d e %d é %d\n", num1, num2, resultado_soma);
    printf("A subtração de %d por %d é %d\n", num1, num2, resultado_subtracao);
    printf("A multiplicação de %d por %d é %d\n", num1, num2, resultado_multiplicacao);
    printf("A divisão de %d por %d é %d\n", num1, num2, resultado_divisao);
    printf("O resto da divisão de %d por %d é %d\n", num1, num2, resultado_resto);

    // Testando as funções
    int lista[] = {1, 2, 3, 4, 5};
    printf("É par? %d\n", eh_par(4));
    printf("É ímpar? %d\n", eh_impar(5));
    printf("Fatorial de 5: %d\n", fatorial(5));
    printf("É primo? %d\n", eh_primo(7));
    printf("Soma dos dígitos de 123: %d\n", soma_dos_digitos(123));
    printf("Soma dos elementos da lista: %d\n", calcular_soma(lista, 5));
    printf("O número 5 é o maior da lista? %d\n", eh_o_maior(5, lista, 5));
    printf("O número 1 é o menor da lista? %d\n", eh_o_menor(1, lista, 5));
    printf("Tamanho da lista: %d\n", calcular_tamanho_lista(lista));

    int area, perimetro;
    retangulo(3, 4, &area, &perimetro);
    printf("Área e perímetro do retângulo: %d, %d\n", area, perimetro);
    printf("Área do círculo com raio 5: %.2f\n", circulo(5));
    printf("Área do triângulo: %.2f\n", triangulo(3, 4));
    printf("Área do trapézio: %.2f\n", trapezio(3, 4, 5));
    printf("Área do losango: %.2f\n", losango(6, 4));
    printf("Área do pentágono: %.2f\n", pentagono(5, 7));
    printf("Área do hexágono: %.2f\n", hexagono(3));
    printf("Média da lista: %.2f\n", calcular_media(lista, 5));
    printf("Validação do CPF: %s\n", cpfvalido("12345678909"));

    int n = 10; // Número de termos da sequência de Fibonacci
    int* fibonacci = calcular_fibonacci(n);
    if (fibonacci != NULL) {
        printf("Sequência de Fibonacci (%d termos): ", n);
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacci[i]);
        }
        printf("\n");
        free(fibonacci);  // Libera a memória alocada para a sequência
    }

    return 0; // Indica que o programa terminou com sucesso.
}
