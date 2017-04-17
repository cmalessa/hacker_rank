//	Insertion Sort - Part 2
//	Author: HackerRank
#include <iostream>

using namespace std;

void swap(int& a, int& b);

int main(void)
{
	int n;
	cin >> n;

	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (a[j - 1] > a[j]) swap(a[j-1], a[j]);
		}

		for (auto d : a) cout << d << " ";
		cout << endl;
	}


	return 0;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}