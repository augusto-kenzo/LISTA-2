#include <stdio.h>

int main() {
    float numero;
    printf("Digite um n�mero positivo para calcular a raiz quadrada: ");
    scanf("%f", &numero);

    if (numero < 0) {
        printf("Erro: o n�mero deve ser positivo.\n");
    } else {
        float estimativa = numero / 2.0f;
        float precisao = 0.00001f;

        while ((estimativa * estimativa - numero) * (estimativa * estimativa - numero) >= precisao * precisao) {
            estimativa = 0.5f * (estimativa + numero / estimativa);
        }

        printf("A raiz quadrada de %.5f � aproximadamente %.5f\n", numero, estimativa);
    }

    return 0;
}
