//	Bon Appetit
//	Author: shashank21j
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void)
{
	int n, k;
	cin >> n >> k;

	vector<int> c(n);
	for(int i = 0; i < n; i++)
	{
		cin >> c[i];
	}

	int b_charged, b_actual;
	cin >> b_charged;
	b_actual = (accumulate(c.begin(), c.end(), 0) - c[k]) / 2;

	if(b_charged == b_actual)
	{
		cout << "Bon Appetit";
	}
	else 
	{
		cout << b_charged - b_actual;
	}



	return 0;
}