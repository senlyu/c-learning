#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main()
{
    /* variable definition: */
    int a, b, c;
    float f;

    /* actual init */
    a = 10;
    b = 20;
    c = a + b;
    printf("value of c : %d \n", c);

    f = 70.0 / 3.0;
    printf("value of f : %f \n", f);

    return 0;
}