//	Library Fine
//	Author: vatsalchanana
#include <iostream>

using namespace std;

int main(void)
{
	int d1, m1, y1, d2, m2, y2, fine;
	cin >> d1 >> m1 >> y1;
	cin >> d2 >> m2 >> y2;

	fine = 0;

	if (y1 > y2)
	{
		fine = 10000;
	}
	else if (m1 > m2 && y1 == y2)
	{
		fine = 500 * (m1 - m2);
	}
	else if (d1 > d2 && m1 == m2 && y1 == y2)
	{
		fine = 15 * (d1 - d2);
	}

	cout << fine;


	return 0;
}