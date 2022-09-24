#include <stdio.h>

int main(void)
{
    int num;
    char word[10];

    printf("Number =");
    scanf_s("%d", &num);

    printf("Word =");
    scanf_s("%s", &word);

    printf("Number: %d \t Word: %s ", num, word);
    return 0;
}
