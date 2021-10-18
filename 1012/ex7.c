#include <stdio.h>

#define MAX 10
int sum_of(int a[], int n)
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp += a[i];
    }
    return temp;
}

int main()
{
    int num = 4;
    int arr[MAX] = {20, 30, 10, 50, 15, 45, 80, 25};
    printf("Result: sum = %d\n", sum_of(arr, num));

    return 0;
}