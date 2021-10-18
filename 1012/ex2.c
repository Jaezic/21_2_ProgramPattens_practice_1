#include <stdio.h>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int num = 0;
    printf("Type a number for fib:");
    scanf("%d", &num);
    printf("Fib(%d) = %d\n", num, fib(num));
    return 1;
}