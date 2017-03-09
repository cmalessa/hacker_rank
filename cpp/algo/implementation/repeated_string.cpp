//	Repeated String
//	Author: tunyash
#include <cmath>
#include <iostream>
#include <string>


using namespace std;

int main(void)
{
	string s;
	cin >> s;

	long n, m;
	cin >> n;

	m = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'a')
		{
			m++;
		}
	}

	m *= (long) floor(n / (s.length()));

	for (int i = 0; i < n % s.length(); i++)
	{
		if (s[i] == 'a')
		{
			m++;
		}
	}

	cout << m;


	return 0;
}