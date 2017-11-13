#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max(int n)
{
	int tmp = (int)log2(n);
	return (int)pow(2,tmp);
}
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long  n;
		scanf(" %lld", &n);
		int counter = 0;
		long long tmp  = n-1;
		while (tmp)
		{
			tmp = tmp & (tmp - 1);
			counter++;
			printf("N:%lld Counter:%d\n",tmp,counter);
		}
		if (counter & 1)
			printf("Louise\n");
		else
			printf("Richard\n");

	}
	return 0;
}
