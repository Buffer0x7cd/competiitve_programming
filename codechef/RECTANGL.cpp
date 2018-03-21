#include <bits/stdc++.h>


using namespace std;
int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int input[4];
		int addition = 0;
		for (int i = 0; i < 4; i++)
		{
			cin>>input[i];
			addition += input[i];
		}
		int a , b;
		a =  input[0];
		int i;
		for( i = 1; i < 4 && input[i] == a ; i++)
			;
		//cout<<"i :"<<i<<endl;
		b = (i > 3)?a:input[i];
		//cout<<a<<" "<<b<<endl;
		int result = 2*a + 2*b;
		if (result == addition)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}
	return 0;
}

