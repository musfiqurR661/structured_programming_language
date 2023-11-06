//a) Write down the output of the following C program, for num = 1 and num = 3.
#include <stdio.h>
int main()
{
    int num;
    int sum = 0, i = 10, j = 5;
    scanf("%d", &num);
    switch (num)
    {
    case 1:
        sum = 2 * i++;
        j++;
    case 2:
        sum = 2 * j--;
        i++;
        break;
    case 3:
        sum = ++i * j--;
    case 4:
        sum = i++ * j--;
        //break;
    default:
        sum = 0;
        i = 0;
        j = 0;
    }
    printf("%d %d %d", i, j, sum);
    return 0;
}
