//	Taum and B'day
//	Author: amititkgp
#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
	int t;
	long b, w, x, y, z;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> b >> w >> x >> y >> z;
		
		cout << (b * min(x, y + z) + w * min(y, x + z)) << endl;
	}


	return 0;
}