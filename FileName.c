#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define number 10
int main(void)
{
	
	int x;
	int i;
	int count [number];
	for (i = 0;i < number;i++)
	{
		count[i] = 0;
	}
	scanf("%d", &x);
	while (x != -1)
	{
		if (x >= 0 && x < number)
		{
			count[x]++;
		}
		else 
		{
			printf("Invalid number\n");
		}
		scanf("%d", &x);
	}
	for (i = 0; i < number;i++)
	{
		printf("%d:%d\n", i, count[i]);
	}
	return 0;
}