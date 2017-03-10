//	Equalize the Array
//	Author: muratekici
#include <algorithm>
#include <iostream>

using namespace std;

int main(void)
{
	int n, m, max;
	cin >> n;

	int a[100] = { };
	max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> m;
		a[m - 1]++;

		if (a[m - 1] > max)
		{
			max = a[m - 1];
		}
	}

	cout << n - max;



	return 0;
}