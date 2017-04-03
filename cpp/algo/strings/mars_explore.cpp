//	Mars Exploration
//	Author: Shafaet
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int n = 0;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != "SOS"[i % 3]) n++;
	}

	cout << n;


	return 0;
}