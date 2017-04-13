#include <stdio.h>

int main(){
    int x = printf("Siema heniu!\n");
    printf("Ilość znaków wypisanych na ekran: %d\n", x);

    printf("%d", putchar('A') );

    puts("Podaj cztery liczby całkowite oddzielone spacjami!");
    int i1, i2, i3, i4;

    printf("Liczba argumentów poprawnie wpisanych: %d\n", scanf("%d %d %d %d", &i1, &i2, &i3, &i4) );

    printf("Podałeś następujące liczby: %d %d %d %d\n", i1, i2, i3, i4);

    //char c;
    //while(scanf("%c", &c) && c!='\n'){}

    char c;
    while( (c=getc(stdin))!='\n'){}

    puts("Jak masz na imię?");
    char imie[10];
    scanf("%9s", imie);
    printf("Twoje imie to: %s\n", imie);

    int wiek = 0;
    printf("Ile masz lat? ");
    scanf("%d", &wiek);
    printf("Twój wiek wynosi %d\n", wiek);

    return 0;
}
