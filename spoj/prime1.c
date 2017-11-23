#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <math.h>
#include <assert.h>
bool isPrime(uint64_t number)
{
	uint64_t sq = (int)sqrt(number);
	for (uint64_t i = 2; i <= sq; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
 void print(uint64_t tmp)
{
	printf("%"PRIu64,tmp);
}
int main(void)
{
	int t;
	assert(isPrime(7727) == true);
	assert(isPrime(150) == false);
	scanf("%d\n", &t);
	while(t--)
	{
		uint64_t n,m;
		scanf("%" PRIu64, &m);
		scanf(" %"PRIu64, &n);
		for (uint64_t i = m; i <= n; i++)
		{
			if (isPrime(i))
			{
				print(i);
				printf("\n");
			}
		}
		
	}
	return 0;
}

