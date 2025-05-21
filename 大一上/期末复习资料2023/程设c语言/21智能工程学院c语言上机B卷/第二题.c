#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* a, int* b)
{
	int* temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
#define         n 3
	int a[n][n];
	int max;
	int* m = NULL;
	printf("请输入3阶方阵(3行3列): ");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		max = a[i][0];
		m = &a[i][0];
		for (int j = 0; j < n; j++) {
			if (a[i][j] > max)
			{
				m = &a[i][j];
				max = a[i][j];
			}
		}
		int g = *m;
		swap(m, &a[i][i]);
	}
	printf("变换后的矩阵为:\n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}