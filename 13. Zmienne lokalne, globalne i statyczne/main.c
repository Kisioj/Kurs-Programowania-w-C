#include <stdio.h>

void komunikat(void);

int k = 101;

void proc(void){
    static int m = 1;
    m++;
    printf("m: %d\n", m);
}

int main(void){
    proc();
    proc();
    proc();
    int a = 5;
    k++;
    printf("1. k: %d\n", k);
    printf("a: %d\n", a);
    komunikat();
    {
        int c = 18;
        printf("c: %d\n", c);
    }

    if(0)
        puts("Tekst 1");

    puts("Tekst 2");

    int i;
    for(i=0;i<3;i++)
        printf("i: %i\n", i);

    return 0;
}

void komunikat(void){
    int b = 8;
    printf("b: %d\n", b);
    k/=2;
    printf("2. k: %d\n", k);
}
