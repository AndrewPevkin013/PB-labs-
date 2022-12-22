#include <stdio.h>
#include <malloc.h>

int NOD(int a, int b) {
    int res = 0, raz = a - b;

    if (a == b)  
        return a;

    if (raz > 0) 
        res = NOD(b, raz);

    else {
        raz = -raz;
        res = NOD(a, raz);
    }
}

//int NOD(int a, int b) {
  //if (a == b)
    //return a;
  //return NOD(a > b ? (b, a - b) : a, abs(b - a));

//}

int NOK(int a, int b)
{
    return a * b / NOD(a, b);
}

void array(int n, int arr[]) {
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;
}

int main(void)
{
    // Задание 1 (1)
    int a, b;
    scanf("%d %d", &a, &b);
    printf("NOD = %d \n", NOD(a, b));
    printf("NOK = %d \n", NOK(a, b));

    // Задание 2 (3)
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    array(n, arr);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
