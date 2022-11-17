#include <stdio.h>

struct circle
{
    int x;
    int y;
    int r;
};

double S(int r)
{
    return 3.14 * r * r;
}

double P(int r)
{
    return 2 * 3.14 * r;
}

enum Book
{
    book, 
    magazine,
    newspaper,
};


struct Point
{
    unsigned int keyboard : 3;
};


int main()
{
    //Задание #1
    enum Book b, m , n;
    b = book;
    m = magazine;
    n = newspaper;

    printf("%d", m);
    printf("\n");

    //Задание #2
    struct circle Circle;
    scanf("%d", &Circle.r);
    printf("S= %lf\n", S(Circle.r));
    printf("P= %lf\n", P(Circle.r));
  
    //Задание #3
    struct Point pt;
    int key;
    scanf("%d", &key);
    if (key == 1)
        pt.keyboard = 1;
    if (key == 2)
        pt.keyboard = 2;
    if (key == 3)
        pt.keyboard = 3;
    printf("%u\n", pt.keyboard);
    return 0;
}
