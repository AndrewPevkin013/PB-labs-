// Var 19
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf_s("%d", &a);
	printf("1) oct:");
	printf("%o\n", a);

	printf("2) hex:");
	printf("%x\n", a);

	int a1 = a << 3;
	printf("3) oct << 3:");
	printf("%o\n", a1);

	printf("4) oct~:");
	printf("%o\n", ~(a << 3));

	scanf_s("%o", &b);
	int c = a & b;
	printf("5) oct &:");
	printf("%o\n", c);

	return 0;
}
