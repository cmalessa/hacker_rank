//	Diagonal Difference
//	Author: vatsalchanana
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector<vector<int>> a(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}

	int diff = 0;
	for (int i = 0; i < n; i++)
	{
		diff += (a[i][i] - a[i][n - i - 1]);
	}

	cout << abs(diff);


	return 0;
}