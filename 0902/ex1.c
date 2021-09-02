#define MAT_SIZE 10

#include <stdio.h>

void init_mat(int mat[][MAT_SIZE], int size, int step);
void mat_mul(int a[][MAT_SIZE], int b[][MAT_SIZE], int c[][MAT_SIZE], int size);
void print_mat1(int mat[][MAT_SIZE], int size);
void print_mat3(int mat[][MAT_SIZE], int size);

int main()
{
    //declar variables
    int mat1[MAT_SIZE][MAT_SIZE] = {0};
    int mat2[MAT_SIZE][MAT_SIZE] = {0};
    int mat3[MAT_SIZE][MAT_SIZE] = {0};

    // filling stage

    // fill matrix 1
    init_mat(mat1, MAT_SIZE, 1);

    // fill matrix 2
    init_mat(mat2, MAT_SIZE, 2);

    // fill amtrix
    mat_mul(mat1, mat2, mat3, MAT_SIZE);

    // printing stage

    // print matrix 1
    print_mat1(mat1, MAT_SIZE);

    // print matrix 2
    print_mat1(mat2, MAT_SIZE);

    // print matrix 3
    print_mat1(mat3, MAT_SIZE);

    return 0;
}

void init_mat(int mat[][MAT_SIZE], int size, int step)
{
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            mat[i][j] = i * 10 * step + j * step;
        }
    }
}

void mat_mul(int a[][MAT_SIZE], int b[][MAT_SIZE], int c[][MAT_SIZE], int size)
{
    int k, temp;
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            temp = 0;
            for (k = 0; k < size; k++)
            {
                temp += (a[i][k] * b[k][j]);
            }
            c[i][j] = temp;
        }
    }
}
void print_mat1(int mat[][MAT_SIZE], int size)
{
    printf("==============================MATRIX=============================\n");
    for (int i = 0; i < MAT_SIZE; i++)
    {
        for (int j = 0; j < MAT_SIZE; j++)
        {
            printf("%5d    ", mat[i][j]);
        }
        printf("\n");
    }
}
