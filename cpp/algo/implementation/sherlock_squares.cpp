//	Sherlock and Squares
//	Author: darkshadows
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int t, a, b, num_squares, j;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;
		num_squares = 0;

		j = floor(sqrt(a));

		while(j * j <= b)
		{
			if (j * j >= a)
			{
				num_squares++;
			}
			j++;
		}

		cout << num_squares << endl;
	}

	return 0;
}