#include <stdio.h>

void main()
{
    void calc(int, int, int *, int *, int *, int *);
    int n1 = 0, n2 = 0;
    int mul = 0, div = 0, mod = 0, add = 0;
    printf("n1 n2 : ");
    scanf("%d %d", &n1, &n2);
    printf("[before]\tmul :%5d div:%5d mod:%5d add:%d\n", mul, div, mod, add);
    calc(n1, n2, &mul, &div, &mod, &add);
    printf("[after]\t\tmul:%5d div:%5d mod:%5d add:%5d\n", mul, div, mod, add);
}
void calc(int n1, int n2, int *mul, int *div, int *mod, int *add)
{
    *mul = n1 * n2;
    *div = n1 / n2;
    *mod = n1 % n2;
    *add = n1 + n2;
}