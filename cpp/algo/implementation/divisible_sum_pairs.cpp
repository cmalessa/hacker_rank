//	Divisible Sum Pairs
//	Author: wanbo
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	int num_pairs = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if ((a[i] + a[j]) % k == 0)
			{
				num_pairs++;
			}
		}
	}

	cout << num_pairs;


	return 0;
}