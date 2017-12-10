#include <bits/stdc++.h>

using namespace std;
int main(void)
{
	uint64_t t;
	cin>>t;
	while(t--)
	{
		uint64_t n;
		cin>>n;
		uint64_t tmp = log(n)/log(5);
		uint64_t result = 0;
		for(size_t i = 1; i <= tmp; i++)
		{
			result += (int)floor(n/pow(5,i));
		}
		cout<<result<<endl;
	}
	return 0;
}
