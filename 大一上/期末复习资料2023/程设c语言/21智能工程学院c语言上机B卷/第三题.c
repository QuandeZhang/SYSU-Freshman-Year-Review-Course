#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <malloc.h>
int c[26] = { 0 };
void findlet(char str[], char* let)
{
	int i, k;
	int cnt = 0;
	k = strlen(str);
	for (i = 0; i < k; i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] + ('A' - 'a');
			}
			let[cnt] = str[i];
			cnt++;
		}
	}
}
void count(char* let)
{
	int i, k;
	k = strlen(let);
	for (i = 0; i < k; i++)
	{
		c[let[i] - 'A'] += 1;
	}
}
int main()
{
	int i;
	printf("�����볤�Ȳ�����30���ַ���:\n");
	char str[30];
	char a[30] = { 0 };
	int k;
	gets(str);
	k = strlen(str);
	findlet(str, a);
	k = strlen(a);
	count(a);
	printf("�����Ĵ�д�ַ���Ϊ��");
	for (i = 0; i < k; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");
	for (i = 0; i < 26; i++)
	{
		if (c[i] > 0) {
			printf("�ַ�%c�ĳ��ִ���Ϊ:%d\n", i + 'A', c[i]);
		}
	}
	free(c);
	return 0;
}