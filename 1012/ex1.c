#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main()
{
    int num = 0;
    printf("Type a number for factorial:");
    scanf("%d", &num);
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}