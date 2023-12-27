#include<stdio.h>
void function(int num)
{
    if (num > 0)
    {
        function(num / 8);
        printf("%d", num % 8);
    }
}

int main(){
    int num= 95;
    function(num);
}
//137