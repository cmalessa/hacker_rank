//	Lonely Integer
//	Author: dheeraj

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int n, a;
	cin >> n;

	bitset<101> A;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		A.flip(a);
	}

	for (int i = 0; i <= 100; i++)
	{
		if (A[i])
		{
			cout << i;
		}
	}


	return 0;
}	