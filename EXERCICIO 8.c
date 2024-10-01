#include <stdio.h>

int main() {
    int numero, soma = 0, n = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    while (soma < numero) {
        soma += n;
        n++;
    }

    if (soma == numero) {
        printf("%d é um numero triangular.\n", numero);
    } else {
        printf("%d nao e um numero triangular.\n", numero);
    }

    return 0;
}
