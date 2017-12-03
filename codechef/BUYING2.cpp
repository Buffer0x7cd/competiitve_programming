#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n] = {0};
		int notesTotal = 0;
		for (int i =0; i < n; i++)
		{
			cin>>a[i];
			notesTotal += a[i];
		}
		int array_size = sizeof(a)/sizeof(a[0]);
		sort(a, a+n);
		int maxSweet = (int)(notesTotal/x);
		int maxMoney = maxSweet*x;
		if (notesTotal - a[0] >= maxMoney)
			cout<<"-1"<<endl;
		else
			cout<<maxSweet<<endl;

	}
	return 0;
}
