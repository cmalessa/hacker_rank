//	Angry Professor
//	Author: devuy11
#include <iostream>

using namespace std;

int main(void)
{
	int t, n, k, s, late;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> k;
		late = 0;
		for (int j = 0; j < n; j++)
		{
			cin >> s;
			late += (s > 0) ? 1 : 0;
		}

		cout << ((late > n - k) ? "YES" : "NO") << endl;
	}


	return 0;
}