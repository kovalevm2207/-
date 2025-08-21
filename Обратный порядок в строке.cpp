// обратный порядок слов

#include <TXLib.h>
#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char from[], char to[], int len);

int main()
{
    int len;
    char line[MAXLINE];
    char reline[MAXLINE];
    len = 0;

    while ( ( len = getline(line, MAXLINE) ) > 0) {
        reverse(line, reline, len);
        printf("%s\n", reline);
    }
    return 0;
}


int getline(char line[], int maxline)
{
    int  c, i;
    i = 0;
    while( ((c = getchar()) != '\n' && c != EOF )  && ( i < maxline - 1) ){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void reverse(char from[], char to[], int len)
{
     for (int i = 0 ; i < len ; ++i) {
        to[len - 1 - i] = from[i];
    }
    to[len] = '\0';
}
