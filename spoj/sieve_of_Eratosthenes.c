#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#define N 10

int *initArray( int n)
{
	int *array;
	int bytesize = sizeof(int)*n;
	array = malloc(bytesize);
	if (!array)
		return NULL;
	array = memset(array, 0,bytesize );
	return array;
}

void generatePrime(int *buffer, int n)
{
	int tmp = (int)sqrt(n);
	for(int i = 2; i <= tmp; i++)
	{
		if (buffer[i] == 0)
		{
			for(int j = 2; i*j <= n; j++)
			{
				buffer[i*j] = 1;
			}
		}
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	int size = (n+1);
	int *buffer = initArray(size);
	int counter = 0;
	if (!buffer)
		return -1;

	generatePrime(buffer,n);
	for (int i = 2; i <= n; i++)
	{
		if (buffer[i] == 0)
		{
			counter++;
			printf("%d\n",i);
		}
	}
	printf("Total number of primes %d\n",counter);
	return 0;
}
