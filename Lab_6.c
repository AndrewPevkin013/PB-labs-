#include <stdio.h>
#include <malloc.h>

int main(void)
{

    char a[4] = { 'W', 'O', 'R', 'K' };

    for (int i = 0; i < 4; i++)
    
        printf("a[%d]: %c  \n", i, *(a + i));
        
    int n1;
    scanf("%d", &n1);
    char* a1 = (char*)malloc(n1 * sizeof(char));
    scanf("%s", a1);
    for (int i = 0; i < n1; ++i)
    
        printf("%c", a1[i]);
        
    free(a1);
    return 0;
}
