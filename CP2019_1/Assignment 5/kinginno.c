#include <stdio.h>

int a[5][5];
int main() {
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			a[i][j] = 3 * (i - 1) + j;
		}
	}
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 3; i >=1; i--)
	{
		for (int j = 3; j >= 1; j--)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
