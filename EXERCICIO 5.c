#include <stdio.h>

int main(){

    int hi, mi, hp, mp;

    printf("Digite a hora inicial:");
    scanf("%d", &hi);
    printf("Digite o minuto inicial:");
    scanf("%d", &mi);
    printf("Digite quantas horas se passou:");
    scanf("%d", &hp);
    printf("Digite quantos minutos se passou:");
    scanf("%d", &mp);

    int mt = mi + mp;
    int mh, mm;

    if(mt>= 60){
        mh = mt / 60;
        mm = mt % 60;
    }else{
        mm = mt;
    }

    int ht = hi + hp + mh;

    if(ht>=24){
        ht = ht-24;
    }else{
    ht = ht;
    }
    printf("A hora final eh:%dh%dm.",ht ,mm);

    return 0;
}
