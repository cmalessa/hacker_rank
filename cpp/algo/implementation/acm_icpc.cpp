//	ACM ICPC Team
//	Author: dheeraj
#include <bitset>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
	int n, m, t, max;
	cin >> n >> m;

	//	Set bitset to max length for problem
	vector<bitset<500>> a(n);
	int k[m] = { };
	string s;

	//	Populate list of people 
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		a[i] = bitset<500>(s);
	}

	max = 0;
	//	Check all two-person combinations
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			t = (a[i]|a[j]).count();
			k[t]++;

			if (t > max)
			{
				max = t;
			}
		}
	}

	cout << max << endl;
	cout << k[max] << endl;


	return 0;
}