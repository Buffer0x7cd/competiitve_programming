#include <bits/stdc++.h>
using namespace std;

inline uint64_t reverse(uint64_t num)
{
	uint64_t tmp = 0;
	while(num)
	{
		tmp = tmp*10 + num%10;
		num = num/10;
	}
	return tmp;
}
int main(void)
{
	size_t t;
	cin>>t;
	while(t--)
	{
		uint64_t a,b;
		cin>>a>>b;
		cout<<reverse(reverse(a)+ reverse(b))<<endl;
	}
	return 0;
}
