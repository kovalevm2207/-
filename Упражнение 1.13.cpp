#include <stdio.h>
#include <TXLib.h>

/* �������������� ����������� ,������������ ����� ����
 ����� ������� ������ � ������� i ������ ������� ����� ���������� ����� i �����
 ��� ����� �� ��������� ��� �������� �������, ������ ����������,������� ����� ���������� ���
 ��������� �� ������ ����� ��� ������� ,���� �� ��������� ������ ����� ,
 �� ������� ���������� �������� ,��� �� ������ ,��� �� ������ ��� ����� �� ����� ����� ��������
 � ����� ��������� ���������� �� ������ � ��������� ���� (���� ��� ���������� OUT � IN */


#define MAXSIZE 1000
#define IN 1
#define OUT 0
main() {

    int massive[MAXSIZE];
    int c, status, wordindex;
    status = OUT;
    wordindex = 0;
    for ( int i = 0 ; i<MAXSIZE ; i++)
        massive[i] = 0;

    for ( c = getchar() ; c != '@' ; c = getchar()) {
        if ( wordindex <= MAXSIZE - 1 && (c == ' ' || c == '\t' || c == '\n'
                                       || c == ',' || c == '.' || c == '!'
                                       || c == '?' || c == '/' || c == '\\'
                                       || c == ')' || c == '(' || c == ':'
                                       || c == ';' || c == '0' || c == '1'
                                       || c == '2' || c == '3' || c == '4'
                                       || c == '5' || c == '6' || c == '7'
                                       || c == '8' || c == '9' || c == '%') ) {
            if (status == IN) {
                wordindex++;
            }
            status = OUT;
        }
        else {
            massive[wordindex]++;
            status = IN;
        }
    }
 for ( int j = 0 ; j <= wordindex ; j++ ) {
        for ( int k = 1 ; k <= massive[j] ; k++ )
            printf("x");
        printf("\n");
    }

    int maximum, e;
    maximum = 0;

    while ( e <= wordindex ) {
        if ( massive[e] > maximum )
            maximum = massive[e];
    }
    printf("%d", maximum);
}
