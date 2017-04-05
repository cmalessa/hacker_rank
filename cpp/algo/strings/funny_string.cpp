//	Funny String
//	Author: Shafaet
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int t, n;
	bool funny;
	string s;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> s;
		n = s.length();
		funny = true;
		for (int j = 1; j < n; j++)
		{
			if (abs(s[j] - s[j - 1]) != abs(s[n - j - 1] - s[n - j]))
				funny = false;			
		}

		if (funny)
		{
			cout << "Funny" << endl;
		}
		else
		{
			cout << "Not Funny" << endl;
		}
	}



	return 0;
}