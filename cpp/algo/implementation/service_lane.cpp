//	Service Lane
//	Author: abhiranjan
#include <iostream>

using namespace std;

int main(void)
{
	int n, t, i, j, min;
	cin >> n >> t;

	int width[n];
	for (int k = 0; k < n; k++)
	{
		cin >> width[k];
	}

	for (int k = 0; k < t; k++)
	{
		min = 4;
		cin >> i >> j;
		for (; i <= j; i++)
		{

			if (width[i] < min)
			{
				min = width[i];
			}
		}

		cout << min << endl;
	}
  

	return 0;
}