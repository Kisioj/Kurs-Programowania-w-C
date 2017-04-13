#include <stdio.h>

int main(){
    /*
        Przykład 1
    */
    char* przedmiot = "Koszulka Adidas";
    char rozmiar = 'L';
    float cena = 99.99;
    double wartosc = 3.53432;
    printf("%s\n\n", przedmiot);
    printf("Rozmiar: %c\n", rozmiar);
    printf("Cena: %g zł.\n", cena);
    printf("Cena: %f zł.\n", cena);
    printf("Cena: %.3f zł.\n", cena);
    printf("Wartość: %g zł.\n", wartosc);
    printf("Wartość: %f zł.\n", wartosc);
    printf("Wartość: %.2f zł.\n", wartosc);
    printf("Cena w promocji -90%: %g\n", cena-(cena*0.9));
    printf("Cena w promocji -90%: %g\n", cena*0.1);
    printf("\n");

    //Przykład 2
    int liczba = 255.5;
    printf("Liczba w systemie dziesietnym: %d\n", liczba);
    printf("Ta sama liczba w systemie ósemkowym: %o\n", liczba);
    printf("Ta sama liczba w systemie szesnastkowym: %x\n", liczba);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", liczba*1.0);
    printf("Ta sama liczba jako zmiennoprzecinkowa: %f\n", (float)liczba);
    printf("\n");

    //Przykład 3
    printf("%d %s %c %g", 20, "Kisioj", 'K', 499.99);
    return 0;
}
