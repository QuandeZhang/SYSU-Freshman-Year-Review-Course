#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int N, i, j,cnt=0;
	printf("请输入一个正整数:");
	scanf("%d", &N);
	printf("0- %d (包括 %d)之间的所有素数有:",N,N);
	for (i = 2; i <= N; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			if (cnt % 5 == 0)
			{
				printf("\n");
			}
			printf("\t%d", i);
			cnt++;
		}
	}
	return 0;
}
