#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <inttypes.h>
#include <assert.h>
uint64_t *initArray(uint64_t n)
{
	uint64_t *tmpBuffer;
	uint64_t bytesize = sizeof(uint64_t)*(n+1);
	tmpBuffer = malloc(bytesize);
	if (!tmpBuffer)
		return NULL;
	tmpBuffer = memset(tmpBuffer, 0, bytesize);
	return tmpBuffer;
}

void generatePrime(uint64_t *tmpBuffer, uint64_t n)
{
	for(uint64_t i = 2; i*i <= n; i++)
	{
		if (tmpBuffer[i] == 0)
		{
			for(uint64_t j = 2; i*j <= n; j++)
			{
				tmpBuffer[i*j] = 1;
			}
		}
	}
}
uint64_t *segementSieve(uint64_t *primeList, uint64_t start, uint64_t end, uint64_t sqrtOfN)
{
	uint64_t size = (end - start +1);
	uint64_t *numberList =  initArray(size);
	if (!numberList)
	{
		perror("Number List: Error while allocating\n");
		return NULL;
	}
	uint64_t offset = start;
	for(uint64_t i = 2; i <= sqrtOfN; i++)
	{
		if (primeList[i] == 0)
		{
			uint64_t tmp = (uint64_t)(ceil((float)start/(float)i));
			tmp = (tmp < 2)?2:tmp;
			assert(tmp*i >= start);
			for(uint64_t j = tmp; i*j <= end; j++)
			{
					numberList[i*j - offset] = 1;
			}
		}
	}
	return numberList;
}

void  printPrimeList(uint64_t *tmpBuffer, uint64_t n, uint64_t offset)
{
	uint64_t counter = 0;
	for(uint64_t i = 0; i <= n; i++)
	{
		if (tmpBuffer[i] == 0 && (i+offset >= 2))
		{
			counter++;
			printf("%"PRIu64"\n",i+offset);
		}
	}
	printf("Number of counter %"PRIu64"\n", counter);
}

int main(void)
{
	uint64_t start, end, n;
	scanf("%" PRIu64,&start);
	scanf("%" PRIu64, &end);
	n = (uint64_t)(sqrt(end) + 1);
	uint64_t *primeList = initArray(n+1);
	generatePrime(primeList, n);
	uint64_t *numberList = segementSieve(primeList, start, end, n);
	if (!numberList)
		return -1;
	printPrimeList(numberList,(end-start),start);
	return 0;
}
