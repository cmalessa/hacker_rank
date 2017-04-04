//	The Love-Letter Mystery
//	Author: amititkgp
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t, n;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> s;
		n = 0;
		for (int j = 0; j < s.length() / 2; j++)
		{
			n += abs(s[j] - s[s.length() - j - 1]);
		}

		cout << n << endl;
	}


	return 0;
}