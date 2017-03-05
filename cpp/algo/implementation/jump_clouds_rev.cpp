//	Jumping on the Clouds: Revisited
//	Author: Shafaet
#include <iostream>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;

	int energy = 100;
	bool tcloud = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tcloud;
		if (i % k == 0)
		{
			energy -= (tcloud) ? 3 : 1;
		}
	}

	cout << energy;

	return 0;
}