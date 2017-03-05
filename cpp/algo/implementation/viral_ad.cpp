//	Viral Advertising
//	Author: Shafaet
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int cur = 2;
	int total = cur;
	for (int i = 1; i < n; i++)
	{
		cur = (int) floor((3 * cur) / 2);
		total += cur;
	}

	cout << total;

	return 0;
}