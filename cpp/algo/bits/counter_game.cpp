//	Counter Game
//	Author: dheeraj

#include <iostream>
#include <cmath>

using namespace std;

unsigned long long highbit (unsigned long long x);

int main()
{
	int T;
	cin >> T;

	bool winner; // 0 : Richard, 1 : Louise
	unsigned long long N;

	for (int i = 0; i < T; i++)
	{
		winner = 0;
		cin >> N;

		while (N != 1)
		{
			if (N && !(N & (N - 1)))
			{
				N >>= 1;
			}
			else
			{
				N -= highbit(N);
			}
		
			winner = !winner;
		}

		cout << (winner ? "Louise" : "Richard") << endl;
	}	


	return 0;
}


unsigned long long highbit (unsigned long long x)
{
	x |= (x >> 1);
	x |= (x >> 2);
	x |= (x >> 4);
	x |= (x >> 8);
	x |= (x >> 16);
	x |= (x >> 32);


	return x - (x >> 1);
}