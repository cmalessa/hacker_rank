//	The Hurdle Race
//	Author: ma5termind
#include <iostream>

using namespace std;

int main(void)
{
	int n, k, c;
	cin >> n >> k;

	int max_hurdle = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c > max_hurdle)
		{
			max_hurdle = c;
		}
	}

	if (max_hurdle > k)
	{
		cout << max_hurdle - k;
	}
	else
	{
		cout << 0;
	}

	return 0;
}