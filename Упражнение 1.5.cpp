#include <stdio.h>
#include <TXLib.h>

main()
{
    int fahr;

    for ( fahr = 300; fahr>=0; fahr = fahr - 20)
        printf ( "%3d %6d\n", fahr, 5*(fahr-32)/9);
}
