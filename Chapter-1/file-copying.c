#include <stdio.h>

/* copy input to output; 1st version */

int main()
{
    int c;

    c = getchar();
    printf("ASCII: %d \n", c);
    
    putchar(69);

    printf("\n");
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}