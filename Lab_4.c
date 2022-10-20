// Var 19
#include <stdio.h>

int main(void)
{
	int num1, num2, bit;
	int min = -50;
	int max = 50;
	scanf_s("%d", &num1);

	int x1 = max / num1;
	int x2 = min / num1;

	printf("%d\n", !!(x1 & x2));

	scanf_s("%d", &num2);
	bit = (num2 >> 19) & 1;
	printf("%d", bit);
	return 0;
}
