#include <stdio.h>

int main ()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step limit */
    fahr = lower;

    printf("ºF\tºC\n");

    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // printf("Real: %6f \n", celsius);
        printf("%3.0f \t %6.1f \n", fahr, celsius);

        // % => Argument
        // % and 'd' => Argument and Integer

        fahr = fahr + step;
    }
}