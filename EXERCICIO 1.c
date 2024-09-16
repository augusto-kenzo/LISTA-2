#include <stdio.h>

int main(){

int num, cont, s_div;

s_div = 0;

printf("digite um numero inteiro e positivo:");
scanf("%d" , &num);

cont=1;

while(cont < num){
    if(num% cont==0){
        s_div = s_div + cont;
    }
    cont++;
}

if(s_div == num){
    printf("o numero e perfeito");
}
    else{
        printf("o numero nao e perfeito");
    }
        return 0;
}












