#include <stdio.h>

void exchange(int *ptr1, int *ptr2);
void main()
{
    int n1, n2;
    printf("n1 n2 : ");
    scanf("%d %d", &n1, &n2);
    printf("[Before]\tn1 : %d, n2 : %d\n", n1, n2);
    exchange(&n1, &n2);
    printf("[After]\t\tn1 : %d, n2 : %d\n", n1, n2);
}
void exchange(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}