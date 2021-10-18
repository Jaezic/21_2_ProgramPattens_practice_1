#include <stdio.h>

int iter_factorial(int n)
{
    int temp = 1;
    for (int i = 1; i <= n; i++)
    {
        temp = temp * i;
    }
    return temp;
}

int main()
{
    int num = 0;
    printf("Type a number for factorial:");
    scanf("%d", &num);
    printf("%d! = %d\n", num, iter_factorial(num));

    return 0;
}