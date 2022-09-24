#include <stdio.h>

int main(void)
{
    int num;
    char word[10];
    float arr;
    char sym;

    printf("Number =");
    scanf_s("%d", &num);

    printf("Word =");
    scanf_s("%s", &word);

    printf("Arr =");
    scanf_s("%g", &arr);

    printf("Symbol =");
    scanf_s("%s", &sym);

    printf("Number: %d \t Word: %s \n", num, word);
    printf("Arr: %g \t Symbol: %c \n", arr, sym);
    return 0;
}
