//	Beautiful Triplets
//	Author: Shafaet
#include <iostream>

using namespace std;

int main(void)
{
	int n, d, bt;
	cin >> n >> d;

	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	bt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] - a[i] == d)
			{
				for (int k = j + 1; k < n; k++)
				{
					if (a[k] - a[j] == d)
					{
						bt++;
					}
				}
			}
		}
	}

	cout << bt;


	return 0;
}
