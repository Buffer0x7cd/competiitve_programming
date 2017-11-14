#include <stdio.h>
#include <stdint.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	uint32_t mask = 0xffffffff;
	while(n)
	{
		uint32_t number;
		scanf(" %u", &number);
		printf("%u\n",(number ^ mask) );
		n--;

	}
	return 0;
}
