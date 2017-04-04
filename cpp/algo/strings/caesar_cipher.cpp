//	Caesar Cipher
//	Author: vatsalchanana
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n, k;
	string s;

	cin >> n >> s >> k;

	for (int i = 0; i < n; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = ((s[i] - 'a' + k) % 26) + 'a';
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = ((s[i] - 'A' + k) % 26) + 'A';
		}
	}

	cout << s;


	return 0;
}