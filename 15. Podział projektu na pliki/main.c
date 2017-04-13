#include <stdio.h>
#include "geometria.h"

int main(void){
    //printf("Pi wynosi %lf\n", pi);
    double r;
    puts("Podaj promień koła:");
    scanf("%lf", &r);
    printf("Pole tego koła wynosi %lf\n", pole(r));
    printf("Obwod tego koła wynosi %lf\n", obwod(r));
    //printf("Kwadrat z liczby 2.0 wynosi %lf\n", kwadrat(2.0));
    return 0;
}
