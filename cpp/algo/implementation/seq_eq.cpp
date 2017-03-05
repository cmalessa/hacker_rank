//	Sequence Equation
//	Author: zemen
#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
	int n, px;
	cin >> n;

	//	We're looking for p(p(y)) = x
	//	This is equivalent to y = p_inv(p_inv(x))
	//	So we map the inverse and apply it twice to x to get y.
	unordered_map<int, int> p_inv;
	for (int x = 1; x <= n; x++)
	{	
		cin >> px;
		p_inv.insert(pair<int, int>(px, x));
	}

	for (int x = 1; x <= n; x++)
	{
		cout << p_inv[p_inv[x]] << endl;
	}


	return 0;
}