#include <stdio.h>
#include <TXLib.h>

//����� ���� ���� ����� ��-����������� �� ����� ������

#define IN 1
#define OUT 0

main()
    {
     int c, status;
     status = OUT;
     while ((c = getchar()) != '@' )
         {
          if ( c == ' ' || c == '\t' || c == '\n' )
              {
              if ( status == IN )
                  printf("\n");
              }
          else
              {
              status = IN;
              putchar(c);
              }
         }
    }
