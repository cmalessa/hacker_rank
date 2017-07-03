//	Maximizing XOR
//	Author: zxqfd55

#include <iostream>

using namespace std;

int main()
{
	int L, R;
	cin >> L >> R;
	int max = 0;

	for (int B = L; B <= R; B++)
	{
		for (int A = L; A <= B; A++)
		{
			max = ((A ^ B) > max ? A^B : max);
		}
	}

	cout << max;

	return 0;
}