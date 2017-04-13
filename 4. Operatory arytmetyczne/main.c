#include <stdio.h>

int main(){
    puts("Lekcja 4");

    char znak = 'A';
    printf("Kod ASCII znaku: %d\n", znak);
    printf("Litera: %c\n", 68);
    znak = znak + 1;
    printf("znak: %c\n", znak);

    signed int liczba_ze_znakiem = -15;
    printf("Nowy znak: %c\n", liczba_ze_znakiem+znak);

    const short int stala = 30;
    //stala = 15;
    printf("Stala + 1 wynosi: %hd\n", (stala+1) );

    unsigned int liczba_bez_znaku = 10;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);
    liczba_bez_znaku -= 11;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);
    liczba_bez_znaku++;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);

    long int zmienna = 13;
    zmienna++;
    printf("1. %ld\n", zmienna);
    ++zmienna;
    printf("2. %ld\n", zmienna);
    zmienna += 2;
    printf("3. %ld\n", zmienna);
    zmienna = zmienna + 4;
    printf("4. %ld\n", zmienna);
    zmienna *= 2;
    printf("5. %ld\n", zmienna);
    zmienna /= 10;
    printf("6. %ld\n", zmienna);
    zmienna = 'A'+2;
    printf("7. %ld\n", zmienna);
    zmienna = 'A'%60;
    printf("8. %ld\n", zmienna);

    int a = 10;
    printf("a = %d\n", a++);
    printf("a = %d\n", a);
    printf("a = %d\n", ++a);
    return 0;
}

/*
    a = (b + 1)      operator przypisania
    a + b      dodawanie
    -       odejmowanie
    *       mnożenie
    /       dzielenie
    %       reszta z dzielenia (dzielenie modulo)
    ++      operator inkrementacji (zwiększenia o 1)
    --      operator dekrementacji (zmniejszenia o 1)

    a = a + b       a += b
    a = a - b       a -= b
    a = a * b       a *= b
    a = a / b       a /= b
    a = a % b       a %= b

    a += 1          ++a
    a -= 1          --a

    a++
    a--
*/
