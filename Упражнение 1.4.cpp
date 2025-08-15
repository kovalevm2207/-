#include <stdio.h>
#include <TXLib.h>

main()
{
    float fahr, celsius;
    int start, end, step;

    start = 0;
    end = 300;
    step = 20;

    celsius = start;

    printf("Таблица соответствия градусов цельсия градусам Фарингейта:\n\n");

    while ( celsius <= end ) {

        fahr=32.0 + (9.0/5.0)*celsius;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;

    }
}
