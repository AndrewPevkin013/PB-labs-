#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    //Задание 1 (1)
    int num = 0, Hw = 0, Lw = 0;
    char data[100] = {'\0'};

    gets(data);

    for (int i = 0; i < sizeof(data) - 1; i++) {
        if ('0' <= data[i] && data[i] <= '9')
            num += 1;
        else if ('A' <= data[i] && data[i] <= 'Z')
            Hw += 1;
        else if ('a' <= data[i] && data[i] <= 'z')
            Lw += 1;
    }
    printf("Num = %d; Hw =  %d; Lw = %d \n", num, Hw, Lw);

    // Задание 2 (3)
    int n, size = 0, inx = 0;
    char ptr;
    scanf("%d", &n);
    char*str = (char*)malloc(10 * sizeof(char));

    while (n > 9)
    {
        str[inx++] = (n % 10) + '0';
        n = n / 10;
    }

    str[inx++] = n + '0';
    /*str[inx++] = n + 48;*/

    str[inx] = '\0';

    for (int i = 0; i < inx / 2; i++)
    {
        ptr = str[i];
        str[i] = str[inx - i - 1];
        str[inx - i - 1] = ptr;
    }

    int i = 0;
    while (str[i] != '\0')
        printf("%c", str[i++]);
    free(str);
    return 0;
}
