/*
*  This is a program to check whether the partial matched word exists in the given text
*  Input: (1) Full text, (2) sub-string
*  Outout: (Yes) print matched (No) print not matched
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* A function to count the number of character */
int strlen(char *a)
{
    int count = 0;
    while (*a++)
    {
        count++;
    }
    return count;
}

/*
* A function to divide two sub strings for the given string
* Intput: (1) Sub-string given, (2) First sub-string divided, (3) Second sub-string divided
*/
int divide_words(char *input, char *p1, char *p2)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == '*')
        {
            for (int j = 0; j < i; j++)
            {
                p1[j] = input[j];
            }
            for (int j = i + 1; j < strlen(input); j++)
            {
                p2[j] = input[j];
            }
            return 1;
        }
    }
    return 0;
}

/* 
* A function to count the number of words in the given text
* Intput: (1) Full text, (2) First sub-string, (3) Second sub-string
* return value: "0" there is no matched word partially, "1" there is matched word partially
*/
int check_words(char *text, char *sub_a, char *sub_b)
{
    int final[2] = {0, 0};
    for (int i = 0; i < strlen(text); i++)
    {
        if (final[0] == 0)
        {
            int check = 0;
            if (text[i] == sub_a[0])
            {
                for (int j = 0; j < strlen(sub_a); j++)
                {
                    if (text[i + j] != sub_a[j])
                        check = 1;
                }
            }
            if (check == 0)
                final[0] = 1;
        }
        else if (final[1] == 0)
        {
            int check = 0;
            if (text[i] == sub_b[0])
            {
                for (int j = 0; j < strlen(sub_b); j++)
                {
                    if (text[i + j] != sub_b[j])
                        check = 1;
                }
            }
            if (check == 0)
                final[1] = 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char text_arr[256], sub_arr[256], sub_a[256], sub_b[256];

    // get words information
    puts("Text matching program\n");
    printf("Type text:");
    gets(text_arr);
    printf("Type sub-string for matching:");
    gets(sub_arr);

    // divide the subwords using "*" character
    divide_words(sub_arr, sub_a, sub_b);

    //find whether matached words existing in the text
    if (check_words(text_arr, sub_a, sub_b))
    {
        printf("Match found!\n");
    }
    else
    {
        printf("There is no matched pattern!\n");
    }
    return 0;
}
