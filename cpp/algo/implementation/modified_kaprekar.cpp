//	Modified Kaprekar Numbers
//	Author: PRAHANTB1984
#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
	int p, q, d, r, l;
	unsigned long long s;
	bool found = false;
	cin >> p >> q;

	for (unsigned long long i = p; i <= q; i++)
	{
		d = (int) floor(log10(i)) + 1;
		s = i * i;
		r =  s % ((int) pow(10, d));
		l = (int) (s / (pow(10, d)));    

		if (l + r == i)
		{
			cout << i << " ";
			found = true;
		}
	}

	if (!found)
	{
		cout << "INVALID RANGE";
	}


	return 0;
}