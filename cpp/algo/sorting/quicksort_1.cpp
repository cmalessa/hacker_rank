//	Quicksort 1 - Partitioning
//	Author: HackerRank
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n, p;
	cin >> n;

	int ar[n];
	for (int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}

	p = ar[0];
	vector<int> left;
	vector<int> equal;
	vector<int> right;

	for (int i = 0; i < n; i++)
	{
		if (ar[i] < p)
		{
			left.push_back(ar[i]);
		}
		else if (ar[i] > p)
		{
			right.push_back(ar[i]);
		}
		else
		{
			equal.push_back(ar[i]);
		}
	}

	for (vector<int>::iterator it = left.begin(); it != left.end(); it++)
	{
		cout << *it << " ";
	}

	for (vector<int>::iterator it = equal.begin(); it != equal.end(); it++)
	{
		cout << *it << " ";
	}

	for (vector<int>::iterator it = right.begin(); it != right.end(); it++)
	{
		cout << *it << " ";
	}


	return 0;
}
