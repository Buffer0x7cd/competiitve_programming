#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int t = 1;
	//scanf("%d",&t);
	while(t--)
	{
		int n,m;
		scanf("%d ",&n);
		//scanf(" %d ",&m);
		char *buffer[n][100];

		for(int i =0; i < n; i++)
		{
			scanf("%s", *buffer[i]);
		}

		for (int i = 0; i < n; i++)
		{
			printf("%s\n",*buffer[i]);
		}

	}
	return 0;
}
