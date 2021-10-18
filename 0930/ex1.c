/*
*  This is a program to count the matched words in the given text
*  Input: (1) Full text, (2) sub-string
*  Outout: the number of matched words in the text
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <string.h>

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

/* A function to count the number of words in the given text
* Intput: (1) Full text, (2) sub-string
* return value: the number of matched words in the text
*/
int match_count(char *text, char *sub)
{
    int cursor = -1, count = 0, text_length = strlen(text), sub_length = strlen(sub);
    /* code here for core algorithm */
    for (int i = 0; i < text_length - sub_length + 1; i++) // 검색이 필요한 곳만 for문을 돌린다.
    {

        if (text[i] == sub[0]) // 서치하는 첫 글자와 sub의 첫 글자가 같다면
        {
            int check = 0; // check는 sub와 다른 문자가 나오는가?

            for (int j = 0; j < sub_length; j++) // 첫 글자부터 sub 길이까지
            {
                if (text[i + j] != sub[j])
                {
                    check = 1; // 서치하는 글자와 sub와 다르다면 check!
                    break;
                }
            }

            if (check == 0 && (i - 1 < 0 ? 1 : text[i - 1] == ' ') && (i + sub_length >= text_length ? 1 : text[i + sub_length] == ' ')) // sub와 다른 문자가 나오지 않고, 서치한 단어에 앞과 뒤가 공백이라면 true(오버플로우 or 언더플로우 시 반드시 true)
            {
                count++; // 단어 수 +1
            }
        }
    }
    return count;
}

int main()
{
    int mat_num;
    char text_arr[256], sub_arr[256];

    // Get text and sub-string
    puts("Text matching program\n");
    printf("Type text: ");
    gets(text_arr);
    printf("Type sub-string for matching: ");
    gets(sub_arr);

    // Call a function to check the number of matched words
    mat_num = match_count(text_arr, sub_arr);
    printf("Matched words: %d\n", mat_num);

    return 0;
}
