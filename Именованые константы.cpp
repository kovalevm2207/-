#include <stdio.h>
#include <TXLib.h>

#define START 0
#define END 300
#define STEP 20

main()
{
    int fahr;

    for ( fahr = START; fahr <= END; fahr = fahr + STEP)
        printf("%3d %6d\n", fahr, 5*(fahr - 32 )/9);
}

