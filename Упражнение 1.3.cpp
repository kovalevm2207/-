#include <stdio.h>
#include <TXLib.h>
main()
{
    float fahr, celsius;
    int lower, large, step;

    lower = 0 ;
    large = 300 ;
    step = 20 ;
    fahr = lower ;

    printf ("Таблица соответствия температур по Фаренгейту температурам по Цельсию:\n\n");

    while ( fahr <= large ) {
        celsius= (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
