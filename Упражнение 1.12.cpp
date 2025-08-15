#include <stdio.h>
#include <TXLib.h>

//Вывод всех слов ввода по-отдельности на новой строке

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
