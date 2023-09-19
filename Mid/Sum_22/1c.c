#include <stdio.h> //#missing
int main()
{

    float a = 5 * (5 / 2);
    int b = 5 * (5 / 2);
    float c = 5 * (5.0 / 2);
    int d = 5 * (5.0 / 2);

    printf("Result is =%f\n", a);
    printf("Result is =%d\n", b);
    printf("Result is =%f\n", c);
    printf("Result is =%d", d);

    return 0;
}