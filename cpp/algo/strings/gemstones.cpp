//	Gemstones
//	Author: darkshadows
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n;
	string s;
	bitset<26> ge;
	bitset<26> cur;

	cin >> n;
	ge = ~ge;

	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < s.length(); j++)
		{
			cur[s[j] - 'a'] = 1;
		}

		ge &= cur;
		cur.reset();
	}

	cout << ge.count() << endl;


	return 0;
}