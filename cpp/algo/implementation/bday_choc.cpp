//	Birthday Chocolate
//	Author: adititayal9

#include <iostream>

using namespace std;

int main()
{
	int n, m, d, total, sum;
	sum = 0;
	total = 0;

	cin >> n;
	int c[n];

	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	cin >> d >> m;	

	for (int i = 0; i + m - 1 < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += c[i + j];
		}

		if (sum == d)
		{
			total++;
		}
		
		sum = 0;
	}

	cout << total;


	return 0;
}