//	Minimum Distances
//	Author: Shafaet
#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
	int n, min;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	min = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j] && abs(i - j) < min)
			{
				min = abs(i - j);
			}
		} 
	}

	cout << (min == n ? -1 : min);


	return 0;
}