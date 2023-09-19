#include <stdio.h>

int main() {
    int count = 0;
    double sum = 0.0;
    double input;

    printf("Enter positive numbers (enter 0 to calculate average):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%lf", &input);

        if (input == 0) {
            break;
        } else if (input > 0) {
            sum += input;
            count++;
        } else {
            printf("Please enter a positive number.\n");
        }
    }

    if (count > 0) {
        double average = sum / count;
        printf("Average of %d positive numbers is: %.2lf\n", count, average);
    } else {
        printf("No positive numbers were entered.\n");
    }

    return 0;
}
