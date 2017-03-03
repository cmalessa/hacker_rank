//	Apple and Orange
//	Author: nabila_ahmed
#include <iostream>

using namespace std;

int main(void)
{
	int s, t;
	cin >> s >> t;

	int a, b;
	cin >> a >> b;

	int m, n;
	cin >> m >> n;

	int apples = 0;
	int d = 0;
	for (int i = 0; i < m; i++)
	{
		cin >> d;
		if (s <= (a + d) && (a + d) <= t) 
			apples++;
	}

	int oranges = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> d;
		if (s <= (b + d) && (b + d) <= t) 
			oranges++;
	}

	cout << apples << endl;
	cout << oranges << endl;


	return 0;
}