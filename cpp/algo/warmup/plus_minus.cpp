//	Plus Minus
//	Author: vatsalchanana
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	float pos = 0.0;
	float neg = 0.0;
	float zero = 0.0;

	for (auto x : arr)
	{
		if (x > 0.0)
		{
			pos += 1.0/n;
		}
		else if (x < 0.0)
		{
			neg += 1.0/n;
		}
		else 
		{
			zero += 1.0/n;
		}
	}

	cout << pos << endl;
	cout << neg << endl;
	cout << zero << endl;




	return 0;
}