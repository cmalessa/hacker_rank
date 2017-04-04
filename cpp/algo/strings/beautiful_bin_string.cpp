//	Beautiful Binary String
//	Author: Shafaet
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int n, m;
	string b;
	
	cin >> n >> b;

	m = 0;
	for (int i = 0; i < n - 2; i++)
	{
		if (b.substr(i, 3) == "010") 
		{
			b[i + 2] = '1';
			m++;
		}
	}

	cout << m;


	return 0;
}