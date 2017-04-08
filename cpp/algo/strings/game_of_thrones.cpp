//	Game of Thrones
//	Author: amititkgp
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	bool p = false;
	cin >> s;

	int a[26] = {0};

	for (int i = 0; i < s.length(); i++)
	{
		a[s[i] - 'a']++;
	}

	if (s.length() % 2 == 0 && count_if(a, a+26, [](auto n){return n % 2 == 1;}) == 0)
	{
		p = true;
	}
	else if (s.length() % 2 == 1 && count_if(a, a+26, [](auto n){return n % 2 == 1;}) == 1)
	{
		p = true;
	}

	cout << (p ? "YES" : "NO") << endl;


	return 0;
}