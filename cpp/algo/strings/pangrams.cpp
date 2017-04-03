//	Pangrams
//	Author: Bidhan
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	bitset<26> a;

	for (int i = 0; i < s.length(); i++)
	{
		if('a' <= s[i] && s[i] <= 'z')
		{
			a[s[i] - 'a'] = 1;
		}
		else if ('A' <= s[i] && s[i] <= 'Z')
		{
			a[s[i] - 'A'] = 1;
		}
	}

	cout << (a.all() ? "pangram" : "not pangram") << endl;


	return 0;
}