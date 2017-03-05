//	Extra Long Factorials
//	Author: vatsalchanana
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

//	The number of digits in 100! is 158. We'll use a slightly greater length
#define LENGTH 160

int main(void)
{
	int n, m, e;
	cin >> n;

	int f[LENGTH] = {1};
	fill_n(f + 1, LENGTH, 0);


	for (int i = 1; i < n; i++)
	{
	
		for (int d = 0; d < LENGTH; d++)
		{
			m = f[d] * i;
			e = 0;
			while (m > 0)
			{
				f[d] = m % 10;

			}
		}
	}


	


	return 0;
}