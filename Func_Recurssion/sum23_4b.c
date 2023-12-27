#include <stdio.h>

void function(int num)
//num=4;
{
    if (num > 0)
    {
        function(--num);
        printf("%d ", num);
        function(--num);
    }
}
int main()
{
    int num=4;
    function(num);
}
/*
0 1 2 0 3 0 1 
*/