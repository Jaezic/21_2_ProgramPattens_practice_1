#include <stdio.h>

void wrt_backward()
{
    int c;
    c = getchar();
    // putchar(c);
    if (c == '\n')
        return;
    else
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