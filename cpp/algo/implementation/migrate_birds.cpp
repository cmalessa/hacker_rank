//	Migratory Birds
//	Author: shashank21j

#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, b, max_type;
	cin >> n;


	max_type = 0;
	vector<int> types(5, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> b;
		types[b]++;

		if (types[b] > types[max_type])
		{
			max_type = b;
		}
		else if (types[b] == types[max_type] && b < max_type)
		{
			max_type = b;
		}
	}

	cout << max_type;


	return 0;
}