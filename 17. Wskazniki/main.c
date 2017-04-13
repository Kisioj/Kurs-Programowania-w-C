#include <stdio.h>

void efekt_trucizny(int *h){
    *h-=5;
}

int main(){
    int k = 15;
    printf("Zmienna k wynosi %d\n", k);
    printf("Adres zmiennej k wynosi %p\n", &k);

    int *wsk = NULL;
    wsk = &k;

    *wsk = 14;
    printf("Zmienna k wynosi %d\n", k);

    printf("Zmienna wsk wynosi %p\n", wsk);
    printf("Wartość zmiennej, której adres zawiera wsk wynosi %d\n", *wsk);
    printf("Adres zmiennej wsk to %p\n", &wsk);


    int hp = 100;
    efekt_trucizny(&hp);
    efekt_trucizny(&hp);
    printf("Wartość zmiennej hp wynosi: %d\n", hp);

    return 0;
}

