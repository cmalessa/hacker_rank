//	Electronics Shop
//	Author: nabila_ahmed

#include <iostream>

using namespace std;

int main()
{
	int s, n, m, ans;

	cin >> s >> n >> m;

	int kb[n];
	int usb[m];

	for (int i = 0; i < n; i++)
	{
		cin >> kb[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> usb[i];
	}

	ans = -1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if(kb[i] + usb[j] > ans && kb[i] + usb[j] <= s)
			{
				ans = kb[i] + usb[j];
				if (ans == s) break;
			}
		}
	}

	cout << ans;


	return 0;
}