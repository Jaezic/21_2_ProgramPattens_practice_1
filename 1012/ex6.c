#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int sum_of(int a[], int n)
{
    if (n < 1 || n > MAX)
    {
        printf("array boundary error");
        exit(1);
    }
    else if (n == 1)
        return a[0];
    else
        return a[n - 1] + sum_of(a, n - 1);
}

int main()
{
    int num = 4;
    int arr[MAX] = {20, 30, 10, 50, 15, 45, 80, 25};
    printf("Result: sum = %d\n", sum_of(arr, num));
    return 1;
}