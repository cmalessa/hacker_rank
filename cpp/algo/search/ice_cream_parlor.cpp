//	Ice Cream Parlor
//	Author: dheeraj
#include <iostream>

using namespace std;

int main(void)
{
	int t, m, n, c1, c2;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> m >> n;
		int c[n];
		for (int j = 0; j < n; j++)
		{
			cin >> c[j];
		}

		c1 = c2 = 0;
		for (int j = 0; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (c[j] + c[k] == m)
				{
					c1 = j + 1; 
					c2 = k + 1;
				}
			}
			if (c1 != 0) break;
		}

		cout << c1 << " " << c2 << endl;
	}


	return 0;
}