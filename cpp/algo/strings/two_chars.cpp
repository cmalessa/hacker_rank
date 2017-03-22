//	Two Characters
//	Author: nabila_ahmed
#include <algorithm>
#include <bitset>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int len, max, cur, lastc;
	cin >> len;

	string s;
	cin >> s;

	bitset<26> in_s(0);
	for_each(s.begin(), s.end(), [&in_s](char c){in_s[c - 'a'] = true;});

	max = 0;
	for (int i = 'a'; i <= 'z'; i++)
	{
		if (!in_s[i - 'a']) continue;

		for (int j = 'a'; j <= 'z'; j++)
		{
			if(!in_s[j - 'a'] || i == j) continue;

			lastc = -1;
			cur = 0;
			for (int k = 0; k < s.length(); k++)
			{
				if (s[k] == i || s[k] == j)
				{
					cur++;
					if (s[k] != lastc)
					{
						lastc = s[k];
					}
					else
					{
						cur = 0;
						break;
					}
				}
			}

			max = (cur > max) ? cur : max;
		}
	}

	cout << max;


	return 0;
}