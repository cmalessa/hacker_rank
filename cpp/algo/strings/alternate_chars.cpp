//	Alternating Characters
//	Author: amititkgp
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
		for (int j = 1; j < s.length(); j++)
		{
			if (s[j] == s[j - 1]) n++;
		}

		cout << n << endl;
	}


	return 0;
}