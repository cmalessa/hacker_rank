//	Mini-Max Sum
//	Author: bishop15
#include <iostream>

using namespace std;

int main(void)
{
	long int a[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}

	long long min = ~0ULL >> 1; // Maximum positive value
	long long max = 1LL << 63; // Minimum negative value
	long long cur = 0;
	
	for(int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j != i)
			{
				cur += a[j];
			}
		}

		if (cur > max)
		{
			max = cur;
		}
		if (cur < min)
		{
			min = cur;
		}

		cur = 0;
	}

	cout << min << " " << max;


	return 0;
}