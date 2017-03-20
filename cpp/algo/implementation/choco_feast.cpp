//	Chocolate Feast
//	Author: shashank21j
#include <iostream>

using namespace std;

int main(void)
{
	int t, n, c, m, choc, w;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n >> c >> m;				

		choc =  n / c;
		w = choc;

		while (w >= m)
		{
			choc += w / m;
			w = (w % m) + (w / m);
		}

		cout << choc << endl;
	}


	return 0;
}