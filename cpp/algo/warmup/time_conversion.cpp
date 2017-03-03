//	Time Conversion
//	Author: vatsalchanana
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(void)
{
	string time;
	cin >> time; // hh:mm:ss(AM/PM)
	int hour = 10 * (int)(time[0] - '0')  + (int)(time[1] - '0');

	if (hour < 12 && time[8] == 'P')
	{
		hour += 12;
	}


	time.replace(0, 2, to_string(hour));
	time.erase(8, 2);

	cout << time;



	return 0;
}
