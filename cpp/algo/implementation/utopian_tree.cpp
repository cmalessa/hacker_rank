//	Utopian Tree
//	Author: dheeraj
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int t;
	cin >> t;

	float n;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		//	This is the solution to the recurrence relation (A075427)
		cout << (int) ((pow(-1.0, n) / 2.0) + pow(2, n / 2.0) * (1 + sqrt(2) + pow(-1.0, n) * (1 - sqrt(2))) - (3.0 / 2.0)) << endl;
	}


	return 0;
}