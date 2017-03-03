//	Sock Merchant
//	Author: Shafaet	
#include <iostream>
#include <unordered_map>

using namespace std;

int main(void)
{
	unordered_map<int, int> map;

	int n, c, num_pairs;
	cin >> n;
	num_pairs = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> c;

		if (map.find(c) == map.end())
		{
			map[c] = 1;
		}
		else
		{
			map[c]++;
			if (map[c] == 2)
			{
				num_pairs++;
				map[c] = 0;
			}
		}
	}

	cout << num_pairs;


	return 0;
}