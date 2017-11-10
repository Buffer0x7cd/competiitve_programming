#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool is_set(int n, int i)
{
	return ((n>>i)&1);
}

int main(void)
{
	int n,m;
	scanf("%d %d", &n, &m);
	int length = m-n+1;
	int a[length];
	for(int i = 0, l = n ; l <= m; l++, i++)
	{
		a[i] = l;
	}
	int max_xor = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 1; j < length; j++)
		{
			int tmp = a[i] ^ a[j];
			if (tmp > max_xor)
				max_xor = tmp;
		}
	}
	printf("%d\n", max_xor);
}
