//	Beautiful Days at the Movies
//	Author: YuryBandarchuk
#include <iostream>
#include <cmath>

using namespace std;

int reverse(int n);

int main(void)
{
	int i, j, k;
	cin >> i >> j >> k;
	int bd = 0;

	for (int x = i; x <= j; x++)
	{
		if (abs(x - reverse(x)) % k == 0)
		{
			bd++;
		}
	}

	cout << bd;

	return 0;
}


int reverse(int n)
{
	int result = 0;

	while (n > 0)
	{
		result = 10 * result + (n % 10);
		n /= 10;
	}

	return result;

}