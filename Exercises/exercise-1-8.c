#include <stdio.h>

int main()
{
    int c, nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    printf("Tabs: %d \n", nt);

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            // Blank
            ++nb;
        } else if (c == '\t') {
            // Tab
            ++nt;
        } else if (c == '\n') {
            // New line
            ++nl;
        }
    }

    printf("Numbers of blanks: \t%d \n", nb);
    printf("Numbers of tabs: \t%d \n", nt);
    printf("Numbers of lines: \t%d", nl);

    return 0;
}