#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int n;
    int e;

    printf("Qual sera sua escolha ?\n1:Pedra;\n2:Papel;\n3:Tesoura\n");
    scanf("%d",&e);



    srand(time(NULL));


    n = rand() % 3;


    if (n == 0) {
        printf("O Programa escolheu Pedra\n");
    } else if (n == 1) {
        printf("O programa escolheu Papel\n");
    } else {
        printf("O programa escolheu Tesoura\n");
    }

    if((n == 0 && e == 1 || n == 1 && e == 2 || n == 2 && e == 3)){
        printf("Empate");
    }
    else if ((e == 1 && n == 2 || e == 2 && n == 0 || e == 3 && n == 1)){
        printf("Voce ganhou");

    }
    else {

    printf("Voce perdeu");
    }





    return 0;
}
