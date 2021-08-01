#include <stdio.h>

int main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    
    // 'ld' => Long integer
    printf("%ld", nc);
}