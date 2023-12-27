
#include <stdio.h>

void f1(int *a, int n1, int n2)
{
    for (int i = 0; i < n1; i++)
    {
        if (*(a + i) % 2 == 1)
        {
            *(a + i + 1) = *(a + i - 1) - (n2 + i);
        }
    }
    for (int j = 0; j < n1; j++) // Corrected the loop condition
    {
        printf("%d ", *(a + j));
    }
}

int main()
{
    int arr[] = {6, 3, 2, 7, 0, 1, 5};
    f1(arr, 7, arr[0] - *(arr + 2));
    return 0; // Added return statement in main
}

/*
6 3 1 -3 0 1 -9 
*/
