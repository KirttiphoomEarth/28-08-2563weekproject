#include<stdio.h>
int main()
{
	int n, i, j, p;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("  ");
		}
		for (p = n; p >= i; p--)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
