//	Counting Valleys
//	Author: pkacprzak

#include <iostream>

using namespace std;

int main()
{
	int n, l = 0, ans = 0;
	char s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s; 
		if (s == 'U')
		{
			l++;
		}
		else if (s == 'D')
		{
			l--;
			if (l == -1) 
				ans++;				
		}
	}

	cout << ans;


	return 0;
}