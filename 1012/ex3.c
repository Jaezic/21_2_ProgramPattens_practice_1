#include <stdio.h>

void wrt_backward()
{
    int c;
    if ((c = getchar()) != '\n')
        wrt_backward();
    putchar(c);
}

int main()
{
    printf("Type a line:");
    wrt_backward();
    printf("\n");
    return 0;
}