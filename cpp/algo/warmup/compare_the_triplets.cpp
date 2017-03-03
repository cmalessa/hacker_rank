//	Compare the Triplets
//	Author: shashank21j
#include <iostream>

using namespace std;

int main(void)
{
	int alice = 0;
	int bob = 0;

	int a[3];
	int b[3];

	cin >> a[0] >> a[1] >> a[2];
	cin >> b[0] >> b[1] >> b[2];

	for (int i = 0; i < 3; i++)
	{
		if (a[i] < b[i])
		{
			bob++;
		}
		else if (a[i] > b[i])
		{
			alice++;
		}
	}

	cout << alice << " " << bob;

	return 0;
}