#include <stdio.h>

// Count lines in input
int main()
{
    int c, number_lines;

    number_lines = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++number_lines;
        }
    }
    printf("%d\n", number_lines);
}