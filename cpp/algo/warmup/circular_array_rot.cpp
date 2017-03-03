//	Circular Array Rotation
//	Author: darkshadows
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	//	n: length of array
	//	k: num of rotations
	//	q: num of queries
	int n, k, q;
	cin >> n >> k >> q;
	k = k % n;

	vector<int> a(n);
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	// m: query index
	int m;
	for (int j = 0; j < q; j++)
	{
		cin >> m;
		cout << a[(n + (m - k)) % n] << endl;		
	}


	return 0;
}