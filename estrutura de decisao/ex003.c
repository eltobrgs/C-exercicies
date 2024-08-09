#include <stdio.h> 

int main() {
    float nota1, nota2, nota3, media;

    // Leitura das três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Cálculo da média aritmética
    media = (nota1 + nota2 + nota3) / 3;

    // Estrutura de decisão baseada na média
    if (media >= 9) {
        printf("O aluno foi aprovado com distinção com media %.2f.\n", media);
    } else if (media >= 7 && media < 9) {
        printf("O aluno foi aprovado com media %.2f.\n", media);
    } else {
        printf("O aluno foi reprovado com media %.2f.\n", media);
    }

    return 0;
}
