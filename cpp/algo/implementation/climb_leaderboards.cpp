//	Climbing the Leaderboards
//	Author: Shafaet
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, m, s, s_last;
	cin >> n;

	vector<int> scores;
	s_last = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (s != s_last)
		{
			scores.push_back(s);
			s_last = s;
		}
	}
	scores.push_back(0);


	cin >> m;
	int alice[m];
	for (int i = 0; i < m; i++)
	{
		cin >> alice[i];
	}

	for (int i = m - 1; i >= 0; i--)
	{
		for (int j = 0; j < scores.size(); j++)
		{
			if (alice[i] >= scores[j])
			{
				cout << j + 1 << endl;
				break;
			}
		}
	}


}