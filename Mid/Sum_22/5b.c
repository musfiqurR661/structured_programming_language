#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int result = 2 * n;
    
    for (int i = n; i >= 1; i--) {
        for (int j = result; j >= 2; j -= 2) {
            printf("%d ", j);
        }
        printf("\n");
        result -= 2;
    }

    return 0;
}
