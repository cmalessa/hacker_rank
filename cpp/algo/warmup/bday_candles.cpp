//	Birthday Cake Candles
//	Author: shashank21j

#include <iostream>

using namespace std;

int main()
{
	int n, h, max, total;
	max = 0;	//	max: The current candle max height.
	total = 0;	//	total: Number of candles that can be blown out. 

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> h;
		if (h > max)
		{
			max = h; 
			total = 1;	
		}
		else if (h == max)
		{
			total++;
		}
	}


	cout << total; 


	return 0;
}