#include <stdio.h>
#include <TXLib.h>
 //����� ���������� �����, ��������� � �������� � ������//

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

    printf ( "� ���� ������ %d �����\t %d ��������\t %d ���������\n ", str, probel, tab );

 }
