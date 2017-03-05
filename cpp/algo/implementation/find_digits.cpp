//	Find Digits
//	Author: HackerRank
#include <iostream>

using namespace std;

int main(void)
{
	int t, n, d, num_div;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		cin >> n;
		num_div = 0;
		d = n;

		while (d > 0)
		{
			if ((d % 10) != 0 && n % (d % 10) == 0)
			{
				num_div++;
			}

			d /= 10;
		}

		cout << num_div << endl;
	}


	return 0;
}