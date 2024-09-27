#include <stdio.h>

int soma_quadrados_digitos(int n) {
    int soma = 0;
    while (n > 0) {
        int digito = n % 10;
        soma += digito * digito;
        n /= 10;
    }
    return soma;
}

int eh_feliz(int n) {
    int lento = n, rapido = n;

    do {
        lento = soma_quadrados_digitos(lento);
        rapido = soma_quadrados_digitos(soma_quadrados_digitos(rapido));
    } while (lento != rapido);

    return lento == 1;
}

int main() {
    int numero;

    printf("Digite um n�mero: ");
    scanf("%d", &numero);

    if (eh_feliz(numero)) {
        printf("%d � um n�mero feliz.\n", numero);
    } else {
        printf("%d n�o � um n�mero feliz.\n", numero);
    }

    return 0;
}



