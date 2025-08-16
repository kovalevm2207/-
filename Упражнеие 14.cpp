#include <TXLib.h>
#include <stdio.h>
#define MAXSIZE 1000
#define YES 1
#define NO 0
int main() {

    int c, r, status, value[MAXSIZE];
    wchar_t sumbol[MAXSIZE];
    c = getchar();
    status = NO;                                // ������ ���������� � ��������� � ����������� �� ��������
    for ( int i = 0 ; i < MAXSIZE ; i++) {
        value[i] = 0;
        sumbol[i] = '0';
    }
    while ( c != '@' ) {
        for ( r = 0 ; status == NO && value[r] != 0 && r < MAXSIZE; r++ ) {
            if ( sumbol[r] == c ) {
                status = YES;
                value[r]++;
            }                         // ��������� ������� ��������� ������ �� �������� ������ ������
        }
        if ( status == NO ) {
             sumbol[r] = c;
             value[r]++;
        }
        status = NO;
        c = getchar();
    }
    /*
    for ( int i = 0 ; value[i] != 0 && i < MAXSIZE ; i++ ) {
         putchar( sumbol[i] );
    }                                                                 //��� �������� ����, ��� ����������� �������
    printf("\n");
    for ( int i = 0 ; value[i] != 0 && i < MAXSIZE ; i++ ) {
         printf( "%d", value[i] );
    }
    printf("\n");   */
    int maximum = 0;

    for ( int i = 0 ; value[i] != 0 && 1 < MAXSIZE ; i++) {
        if ( value[i] > maximum ) {                          // ������� ������������ �������� � ������� value
            maximum = value[i];
        }
    }
    for ( int i = 0 ; i < maximum ; i++) {
        for ( int j = 0 ; value[j] != 0 && j < MAXSIZE ; j++ ) {
            if ( value[j] >= maximum - i ) {
                printf ( "x " );                      // �������� ������������ �����������
            } else {
                printf ( "  " );
            }
        }
        printf("\n");
    }
    for ( int i = 0 ; value[i] != 0 && i < MAXSIZE ; i++ ) {
        putchar( sumbol[i] );
        printf( " " );
    }
    printf("\n");
    return 0;
}
