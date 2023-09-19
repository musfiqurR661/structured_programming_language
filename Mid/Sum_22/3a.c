/*
a) Replace the nested “for” loop in the following code using nested “do-while” loop without
changing the logical meaning of the program:
 void main() {
 int n = 3, i, j, sum = 0;
 for(i = 0; i < n; i++) {
 for(j = 0; j <= i; j++) {
 if(i == j) sum += i + j;
 else if(i > j) sum += i + n;
 else sum += n – j;
 }
 }
 }*/

 #include <stdio.h>

int main() {
    int n = 3, i = 0, j, sum = 0;

    do {
        j = 0;
        do {
            if (i == j)
                sum += i + j;
            else if (i > j)
                sum += i + n;
            else
                sum += n - j;

            j++;
        } while (j <= i);

        i++;
    } while (i < n);

    return 0;
}
