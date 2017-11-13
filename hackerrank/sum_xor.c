#include <stdio.h>
#include <math.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	int tmp  = (int)log2(n) + 1;
	int counter = 0;
	while(n)
	{
		n = n &(n-1);
		counter++;
	}
	int number_of_zeroes = tmp - counter;
	printf("%d\n",(int)pow(2,number_of_zeroes));
	return 0;
}
