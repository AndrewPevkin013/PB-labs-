#include <stdio.h>

int main()
{
    printf("Array \n");
    int arr[6];
    for (int i = 0; i < 6; i++) {
        scanf_s("%d", &arr[i]);
    }
    
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Matrix \n");
    int matrix1[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf_s("%d", &matrix1[i][j]);
        }
    }

    int matrix2[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            scanf_s("%d", &matrix2[i][j]);
        }
    }

    int matrix3[2][2];
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrix3[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            matrix3[i][j] += matrix1[i][j] * matrix2[i][j];
        }
    }

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
