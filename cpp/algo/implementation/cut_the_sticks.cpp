//	Cut The Sticks
//	Author: shashank21j
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, small;
	cin >> n;

	vector<int> sticks(n);
	for (int i = 0; i < n; i++)
	{
		cin >> sticks[i];
	}


	while (sticks.size() > 0)
	{
		cout << sticks.size() << endl;

		//	Find smallest stick
		small = ~0U >> 1;
		for (vector<int>::iterator it = sticks.begin(); it != sticks.end(); it++)
		{
			if (*it < small)
			{
				small = *it;
			}
		}

		//	Cut all sticks, if zero remove
		for (vector<int>::iterator it = sticks.begin(); it != sticks.end(); it++)
		{
			*it -= small;
			if (*it <= 0) 
			{
				sticks.erase(it);
				it--;
			}
		}
		
	}


	return 0;
}