#include <stdio.h>

int main()
{
    int c;
    int inspace;
    char ch;

    inspace = 0;
    while ((c = getchar()) != EOF) {
        ch = c;
        if (c == ' ') {
            if (inspace == 0) {
                inspace = 1;
                putchar(c);
            }
        }

        if (c != ' ') {
            inspace = 0;
            putchar(c);
        }
    }
}