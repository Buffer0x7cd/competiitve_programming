#include <bits/stdc++.h>
#define PRIME_BUFFER 31623
using namespace std;

int main(void)
{
	vector <bool> prime_numbers(PRIME_BUFFER + 1, true);
	prime_numbers[0] = prime_numbers[1] = false;
	for(size_t i = 2; i*i <= PRIME_BUFFER; i++)
	{
		if(prime_numbers[i])
		{
			size_t k = 2;
			for(size_t j = k*i; j <= PRIME_BUFFER; j += i)
				prime_numbers[j] = false;
		}
	}
	uint64_t t, tmp;
	cin>>t;
	tmp = t;
	while(t--)
	{
		if (t < tmp-1)
			cout<<endl;
		uint64_t n, m;
		cin>>m>>n;
		uint64_t interval = (uint64_t)sqrt(n) + 1;
		uint64_t start, end;
		start = end = 0;
		vector <uint64_t> results;
		start = m;
		end = start + interval - 1;
		while(start <= n)
		{
			vector <bool> numebers(interval, true);
			if (end > n)
				end = n;
			for (size_t i = 2; i*i <= end; i++)
			{
				if (prime_numbers[i])
				{
					//cout<<"Checking with"<<i<<endl;
					double tmp = (double)start/(double)i;
					//cout<<tmp<<endl;
					uint64_t k = (uint64_t)(ceil(tmp));
					k = (k <= 1)?2:k;
					//cout<<"start is"<<start<<"and k is"<<k<<endl; 
					for(size_t j = k*i; j <= end; j+= i)
					{
						//cout<<j<<endl;
						assert(j-start <= interval);
						assert(j >= start);
						numebers[j-start] = false;
					}

				}
			}
			//cout<<"out"<<endl;
			for(uint64_t i = 0; i <= (end - start); i++)
				if (numebers[i] && (i+start > 1))
					results.push_back(i+start);
			start += interval;
			end = start + interval - 1;
			if (end > n)
				end = n;
		}
		for(size_t i = 0; i < results.size(); i++)
			cout<<results[i]<<endl;
	}		
}
