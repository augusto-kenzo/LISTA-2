#include <stdio.h>

int main(){

    int n , s=0;

    printf("Soma dos digitos de um numero.\n\n");
    printf("Digite um numero inteiro positivo:");
    scanf("%d",&n);

    if(n<0){
        n = n * -1;
    }else {
        n = n * 1;
    }
    while(n>0){

        int c = n % 10;
        s += c;
        n /= 10;

    }
    printf("A soma dos digitos do numero eh:%d", s);

    return 0;

}
