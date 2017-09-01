//	Encryption
//	Author: HackerRank

#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int L, r, c;
	string s;

	cin >> s;

	L = s.length();
	r = floor(sqrt(L));
	c = ceil(sqrt(L));
	if (r * c  < L) r++;

	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
		{
			if ((i + j * c) >= L)
			{
				break;
			}
			cout << s[i + j * c];
		}

		cout << " ";
	}


	return 0;
}