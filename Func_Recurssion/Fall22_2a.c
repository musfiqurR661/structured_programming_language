#include <stdio.h>
int a = 0, b = 0, c = 0;
int func1(int p)
{
    c = p + a;
    return c;
}
int func3(int c)
{
    //  printf("%d\n", c);
    c = 2;
    // printf("%d\n", c);
    a *= 2;
    // printf("%d\n", a);
    return c * a;
}
void func2(int x, int b)
{
    x *= 2;
    b = func3(x);
}
void main()
{
   a = 2121 % 47;
    func3(a);
    printf("%d %d %d \n", a, b, c);
    b = func1(a);
    printf("%d %d %d \n", a, b, c);
    func2(a, b);
    printf("%d %d %d \n", a, b, c);
}


/*

12 0 0
12 24 24
24 24 24

*/