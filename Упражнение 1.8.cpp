#include <stdio.h>
#include <TXLib.h>
 //вывод количества строк, табуляций и пробелов в тексте//

main()
{
    int c, a, tab , str ;
    int probel ;

    tab = 0;
    str = 1;
    probel = 0;

    while ( (c = getchar()) != '@' ) {

         if ( c == ' ')

             probel += 1 ;

         if ( c == '\\' ) {

             a = getchar();

             if ( a == 'n' )

                 str = str + 1;

             if ( a == 't' )

                 tab = tab +1 ;

         }
    }

    printf ( "В этом тексте %d строк\t %d пробелов\t %d табуляций\n ", str, probel, tab );

 }
