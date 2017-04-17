//	Insertion Sort 1
//	Author: HackerRank
#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main(void)
{
	int n, e;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	e = a[n - 1];

	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i - 1] > e)
		{
			a[i] = a[i - 1];	
			for (auto d : a) cout << d << " ";
			cout << endl;
		}
		else
		{
			a[i] = e;
			for (auto d : a) cout << d << " ";
			cout << endl;
			break;
		}
	}


	return 0;
}