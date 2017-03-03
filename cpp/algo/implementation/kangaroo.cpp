//	Kangaroo
//	Author: wanbo
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	float x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	//	Search for whole number, positive values of t
	float sol = (x1 - x2) / (v2 - v1);
	if (sol - trunc(sol) == 0.0f && sol >= 0.0f)
	{
		cout << "YES";
	}
	else 
	{
		cout << "NO";
	}

	return 0;
}