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
    for (int i = 0; i < strlen(input); i++) // 탐색 시작
    {
        if (input[i] == '*' && i != strlen(input) - 1) // *인가 ? AND 마지막 문자열이 아닌가? (오버플로우 예방)
        {
            for (int j = 0; j < i; j++) // p1에 *전의 문자열 복사
            {
                p1[j] = input[j];
                if (j == i - 1) // 마지막에 \0
                    p1[j + 1] = '\0';
            }
            for (int j = 0; j < strlen(input) - i - 1; j++) // p2에 *후의 문자열 복사
            {
                p2[j] = input[i + j + 1];
                if (j == strlen(input) - 1) // 마지막에 \0
                    p2[j + 1] = '\0';
            }
            return 1; // 다 끝나면 함수 리턴
        }
    }

    for (int j = 0; j < strlen(input); j++) // *을 찾지 못했다면 p1에 input값 모두 넣기
    {
        p1[j] = input[j];
    }
    return 1;
}

/* 
* A function to count the number of words in the given text
* Intput: (1) Full text, (2) First sub-string, (3) Second sub-string
* return value: "0" there is no matched word partially, "1" there is matched word partially
*/
int check_words(char *text, char *sub_a, char *sub_b)
{
    int final[2] = {0, 0};  // fianl는 패턴을 찾았냐 못찾았냐의 여부
    if (strlen(sub_b) == 0) // 만약에 *을 찾지 못했다면 두번째 패턴은 찾았다고 가정
        final[1] = 1;

    int cursor = 0;                                                 // 커서를 통해 첫번째와 두번째 탐색의 순서를 배정
    for (int i = cursor; i < strlen(text) - strlen(sub_a) + 1; i++) // 오버플로우를 예방하며 탐색 시작
    {
        if (text[i] == sub_a[0]) // 첫 문자를 찾았다면
        {
            int check = 0, j;
            for (j = 0; j < strlen(sub_a); j++) // 이후부터 하나 하나 대조하기
            {
                if (text[i + j] != sub_a[j]) // 만약에 서로가 다르다면
                {
                    check = 1; // check !
                    break;
                }
            }
            if (check == 0) // 서로다른 문자가 나오지 않았다면
            {
                final[0] = 1;       // 첫번째 패턴 찾았다
                cursor = i + j + 1; // 지금까지 본 인덱스 저장
                break;
            }
        }
    }
    // 첫번째 패턴을 찾았고, 두번째 패턴을 찾지 못했고(substr 에서 *을 찾았고), 오버플로우가 발생하지 않으면
    if (final[0] == 1 && final[1] == 0 && strlen(text) - cursor >= strlen(sub_b))
    {
        for (int i = cursor; i < strlen(text); i++) // 커서부터 마지막까지 탐색
        {
            if (text[i] == sub_b[0]) // 첫 문자를 찾았다면
            {
                int check = 0;
                for (int j = 0; j < strlen(sub_b); j++) // 이후부터 하나 하나 대조하기
                {
                    if (text[i + j] != sub_b[j]) // 만약에 서로가 다르다면
                    {
                        check = 1; // check !
                        break;
                    }
                }
                if (check == 0) // 서로 다른 문자가 나오지 않았다면
                {
                    final[1] = 1; // 두번째 패턴 찾았다
                    break;
                }
            }
        }
    }

    if (final[1] == 1 && final[0] == 1) // 첫번째 패턴과 두번째 패턴을 찾으면 true 이외는 false
        return 1;
    else
        return 0;
}

int main()
{
    char text_arr[256], sub_arr[256], sub_a[256] = "", sub_b[256] = "";

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
