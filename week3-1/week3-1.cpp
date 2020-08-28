#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	if (x > 0)
	{
		if (x % 2 == 0)
			printf("%d is even positive number", x);
		else if (x % 2 != 0)
			printf("%d is odd positive number", x);
	}
	else if (x < 0)
	{
		if (x % 2 == 0)
			printf("%d is even negative number", x);
		else if (x % 2 != 0)
			printf("%d is odd negative number", x);
	}
	else
		printf("%d is zero", x);
	return 0;
}