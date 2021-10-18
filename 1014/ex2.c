#include <stdio.h>
int puzzle(int n)
{
    if (n == 1)
        return 1;
    if (n % 2 == 0)
        return (puzzle(n / 2) + n);
    else
        return (puzzle(3 * n + 1));
}

int main()
{
    int num;
    printf("Type a number for puzzle:");
    scanf("%d", &num);
    printf("Result : puzzle(%d) = %d\n", num, puzzle(num));
    return 0;
}