#include <stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int length_words[20];
    for (int i = 0; i < 20; i++)
        length_words[i] = 0;

    int c, i, len_word, state;

    i = len_word = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                length_words[i] = len_word;
                len_word = 0;
                ++i;
            }
            state = OUT;
            
        } else {
            state = IN;
            ++len_word;
        }
    }

    int elements_in_array = sizeof(length_words) / sizeof(int);
    for (int i = 0; i < elements_in_array; ++i) {
        if (length_words[i] != 0) {
            printf("[ %d ] \t|  ", i+1, length_words[i]);
            for (int sign = 0; sign < length_words[i]; ++sign)
                printf("-");
            printf("\n");
        }
    };


}