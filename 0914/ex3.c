#include <stdio.h>

void main()
{
    void minmax(int, int, int *, int *);
    int n1 = 0, n2 = 0;
    int min = 0, max = 0;
    printf("n1 n2 : ");
    scanf("%d %d", &n1, &n2);
    printf("[before]\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
    minmax(n1, n2, &min, &max);
    printf("[after]\t\tn1:%d, n2:%d, min:%d, max:%d\n", n1, n2, min, max);
}

void minmax(int n1, int n2, int *min, int *max)
{
    if (n1 >= n2)
    {
        *max = n1;
        *min = n2;
    }
    else
    {
        *max = n2;
        *min = n1;
    }
}