#include <stdio.h>
#include <math.h>

int main(){

    int n, c = 0, s = 0;

    printf("Contar numeros de digitos.\n");
    printf("Digite um numero inteiro positivo:");
    scanf("%d",&n);

    int g = n;
    if(n == 0){
        c = 1;
    }else{
        while(n>0){
        c ++;
        n = n/ 10;
    }
    }
    n=g;

    while(n>0){

        int x = n % 10;
        s += pow(x,c);
        n /= 10;
    }
    if(s == g){
    printf("O numero e de armstrong");
    }else if(s != g ){
    printf("O numero nao eh de armstrong");
    }
}

