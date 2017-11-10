#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf(" %d", &a[i]);
	}
	int q;
	scanf(" %d", &q);
	while(q--)
	{
		int l, r;
		scanf(" %d %d", &l, &r);
		int tmp = a[l-1];
		int counter = a[l-1] == 0? 1:0;
		for (int i = l; i < r; i++)
		{
			if (!a[i])
				counter++;
			tmp = tmp ^ a[i];

		}
		printf("%d %d\n", tmp, counter);

	}
	return 0;

}
