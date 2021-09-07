#include <stdio.h>

#define MAXNUM 50
int word_count(char[MAXNUM]);

void main()
{
    // store string array
    char input[50];
    printf("input : ");
    gets(input);
    // call word_count function
    int result = word_count(input);
    printf("\nthe number of words : %d\n", result);
}

int word_count(char input[])
{
    int count = 0, i = 0, flag = 0;
    while (input[i] != '\0')
    {
        if (input[i] == ' ')
            flag = 1;
        else
        {
            if (flag == 1)
            {
                count++;
                flag = 0;
            }
        }
        i++;
    }
    return count + 1;
}