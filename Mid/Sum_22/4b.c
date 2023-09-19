#include <stdio.h>
int main()
{

    int n;
    int i;
    scanf("%d", &n);
    int arr[100] = {};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Index\tValue\n");
    printf("------\t------\n");

    for ( i = 0; i < n; i++)
    {
        printf("%d\t%d\n", i, arr[i]);
    }
    int sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) { // Check if the index is odd
            sum += arr[i];
            count++;
        }
    }
     if (count > 0) { // Avoid division by zero
        double average = (double)sum / count;
        printf("Average of odd-indexed elements: %.5lf\n", average);
    } else {
        printf("No odd-indexed elements to calculate the average.\n");
    }

    return 0;
}