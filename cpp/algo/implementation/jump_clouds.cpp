//	Jumping on the Clouds
//	Author: Shafaet
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, j;
	cin >> n;

	vector<int> c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	j = 0;
	for (int i = 0; i < n;)
	{
		if (c[i + 2] == 1)
		{
			j++;
			i++;
		}
		else
		{
			j++;
			i += 2;
		}

		if (i == n - 1)
		{
			break;
		}

	}

	cout << j;

	return 0;
}