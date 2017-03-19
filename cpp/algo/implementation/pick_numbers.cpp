//	Picking Numbers
//	Author: wanbo
#include <iostream>

using namespace std;

int main(void)
{
	int n, max, cur_u, cur_d;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	max = 0; 
	for (int i = 0; i < n; i++)
	{
		cur_u = cur_d = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] <= a[j] && a[j] - a[i] <= 1)
			{
				cur_u++;
			}
			if (a[i] >= a[j] && a[i] - a[j] <= 1)
			{
				cur_d++;
			}
		}

		max = (max < cur_u) ? cur_u : max;
		max = (max < cur_d) ? cur_d : max;
	}

	cout << max;


	return 0;
}