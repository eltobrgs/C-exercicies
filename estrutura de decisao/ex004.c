#include <stdio.h>

int main() {
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("%d é par.\n", number);
    } else {
        printf("%d é impar.\n", number);
    }

    return 0;
}



