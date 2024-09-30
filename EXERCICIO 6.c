#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o intervalo (dois numeros inteiros): ");
    scanf("%d %d", &inicio, &fim);

    if (inicio > fim) {
        printf("Erro: O inicio do intervalo deve ser menor ou igual ao fim.\n");
    } else {
        printf("Numeros palindromicos entre %d e %d:\n", inicio, fim);

        int i = inicio;
        while (i <= fim) {
            int numero = i, reverso = 0;

            while (numero > 0) {
                reverso = reverso * 10 + numero % 10;
                numero /= 10;
            }

            if (i == reverso) {
                printf("%d ", i);
            }

            i++;
        }
        printf("\n");
    }

    return 0;
}
