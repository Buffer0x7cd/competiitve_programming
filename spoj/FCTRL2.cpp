#include <bits/stdc++.h>

inline void print(std::vector <int> &buffer)
{
	for(ssize_t i = buffer.size() - 1; i >= 0; i--)
		std::cout<<buffer[i];
	std::cout<<std::endl;
}
inline void multiply (uint64_t num ,std::vector <int> &buffer)
{
	uint64_t  carry = 0;
	//std::cout<<"Multilying "<<num<<" With:";
//	print(buffer);
	for (size_t i = 0; i < buffer.size(); i++)
	{
		//std::cout<<"Carry is"<<carry<<std::endl;
		uint64_t prod;
		prod = num*buffer[i] + carry;
		buffer[i] = prod%10;
		carry = prod/10;
	}
	while(carry)
	{
		buffer.push_back(carry%10);
		carry = carry/10;
	}
//	std::cout<<buffer[buffer.size()-1]<<std::endl;
}

int main(void)
{
	uint64_t t;
	std::cin>>t;
	while(t--)
	{
		uint64_t n;
		std::cin>>n;
		std::vector <int> buffer;
		buffer.push_back(1);
		for(size_t i = 2; i <= n; i++)
		{
			multiply(i,buffer);
		}
		print(buffer);
	}
	return 0;
}
