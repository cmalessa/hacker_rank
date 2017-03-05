//	Save the Prisoner!
//	Author: sd5869
#include <iostream>

using namespace std;

int main(void)
{
	int t, n, m, s, p;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		 cin >> n >> m >> s;
		 p = (s + m - 1) % n;
		 cout << ((p == 0) ? n : p) << endl;
	}



	return 0;
}