//	A Very Big Sum
//	Author: vatsalchanana
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long sum = 0;
	for (auto x : arr)
	{
		sum += x;
	}	



	cout << sum;


	return 0;
}