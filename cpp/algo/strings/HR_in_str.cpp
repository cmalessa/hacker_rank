//	HackerRank in a String!
//	Author: shashank21j
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int p, q;
	cin >> q;

	string s, t;

	t = "hackerrank";

	for (int i = 0; i < q; i++)
	{
		cin >> s;
		p = 0;
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == t[p]) p++;
		}

		cout << ((p == t.length()) ? "YES" : "NO") << endl;
	}


	return 0;
}