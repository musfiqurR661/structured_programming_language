#include <stdio.h> //#missing
int main()
{
    int num1 = 5;
    float num2; // declare different variable in different paramitter
    char chr = 'q';

    scanf("%f", &num2);          // num1 because of "num2" variable
    num1 = (int)num2 % (int)chr; //
    printf("Result is =%d", num1);
    return 0;
}
/*
(b)
while   // this is an loop
2ndNum  // we cant used a numarical variable at the beginning
!num   // this is not a variable ,this is a condition check
smallest-val // this is not possible bcz of (-) this
avg marks //we can able to use a variable under one datatype

(c)
float a=5*(5/2)    =10.000000
int b=5*(5/2)      =10
float c=5*(5.0/2)  =12.500000
int d=5*(5.0/2)    =12
