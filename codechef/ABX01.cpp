#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	long long t;
	cin>>t;
	while(t--)
	{
		uint64_t a,n;
		cin>>a>>n;
		uint64_t sum = 0;
		uint64_t num = pow(a,n);
		//cout<<num<<endl;	
		while(1)
		{
			sum = 0;
			while(num)
			{
				sum += num%10;
				num = num/10;
			}
			if (sum < 10)
				break;
			else
				num = sum;

		}
		cout<<sum<<endl;
	}
}
