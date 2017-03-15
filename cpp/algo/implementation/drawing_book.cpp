//	Drawing Book
//	Author: nabila_ahmed
#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
	int n, p, f, b;
	cin >> n >> p;

	f = floor(p / 2);
	b = floor(n / 2) - floor(p / 2);

	cout << (f < b ? f : b);

	return 0;
}