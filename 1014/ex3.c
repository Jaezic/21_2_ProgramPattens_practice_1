#include <stdio.h>

#define MAX 20
void init(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Type the %d-th elemnet:", i);
        scanf("%d", &arr[i]);
    }
}

int bs(int list[], int lo, int hi, int key)
{
    int mid;
    if (lo > hi)
        return -1;
    mid = (lo + hi) / 2;
    if (list[mid] == key)
        return 0;
    else if (list[mid] > key)
        return bs(list, lo, mid - 1, key);
    else if (list[mid] < key)
        return bs(list, lo, mid + 1, key);
    else
        return -1;
}

int main()
{
    int size = 0, key = 0;
    int arr[MAX] = {
        0,
    };
    printf("Type size of array: ");
    scanf("%d", &size);

    init(arr, size);
    printf("\nType a key for searching: ");
    scanf("%d", &key);

    if (bs(arr, 0, size, key) == 0)
        printf("The key exists in the array!\n");
    else
        printf("The key does not exist in the array!\n");

    return 1;
}