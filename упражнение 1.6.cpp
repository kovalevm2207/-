#include <stdio.h>
#include <TXLib.h>

main()
{
    int c, a;

    c = EOF;
    a = 1;
    printf ("%d %d", c != EOF, a != EOF);
}
