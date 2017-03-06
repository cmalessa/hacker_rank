//	Extra Long Factorials
//	Author: vatsalchanana
#include <iostream>
#include <array>

using namespace std;

//	The number of digits in 100! is 158. We'll use a slightly greater length
#define LENGTH 160

void add(array<int, LENGTH>& a, array<int, LENGTH>& s);
void mul(array<int, LENGTH>& a, int n);
void fac(array<int, LENGTH>& a, int n);

int main(void)
{
	int n;
	cin >> n;

	array<int, LENGTH> r;
	r.fill(0);
	r[0] = 1;

	fac(r, n);

	//	Print and ignore leading zeros
	bool pad = true;
	for (int i = LENGTH - 1; i >= 0; i--)
	{
		if (pad && r[i] != 0)
		{
			pad = false;
		}

		if (!pad)
		{
			cout << r[i];
		}
	}


	return 0;
}

//	These are hacked together so they're only useful for this particular problem.
void add(array<int, LENGTH>& a, array<int, LENGTH>& s)
{
	int carry, add;

	carry = 0;
	for (int i = 0; i < LENGTH; i++)
	{
		add = carry + a[i] + s[i];

		if (add > 9)
		{
			carry = 1;
			a[i] = add - 10;
		}
		else
		{
			a[i] = add;
			carry = 0;
		}
	}
}

void mul(array<int, LENGTH>& a, int n)
{
	array<int, LENGTH> temp;
	temp = a;
	for (int i = 1; i < n; i++)
	{
		add(a, temp);
	}

}

void fac(array<int, LENGTH>& a, int n)
{
	for (int i = 1; i <= n; i++)
	{
		mul(a, i);
	}
}