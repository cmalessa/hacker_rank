//	The Time in Words
//	Author: PRASHANTB1984

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string ones[] = {"", "one ", "two ", "three ", "four ", "five ", "six ", "seven ", "eight ", "nine "};
	string teen[] = {"ten ", "eleven ", "twelve ", "thirteen ", "fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen "};
	string tens[] = {"", "ten ", "twenty ", "thirty ", "fourty ", "fifty "};	

	int h, m;

	cin >> h >> m;

	if (m == 0)
	{
		cout << ones[h] << "o' clock" << endl;
	}
	else
	{
		if (m <= 30)
		{
			if (m == 15)
			{
				cout << "quarter ";
			}
			else if (m == 30)
			{
				cout << "half ";
			}
			else if (m > 10 && m < 20)
			{
				cout << teen[m % 10];
				cout << "minutes ";
			}
			else
			{
				cout << tens[m / 10] << ones[m % 10];
				cout << "minute" << ((m == 1) ? " " : "s ");

			}

			cout << "past ";
			if (h < 10)
				cout << ones[h] << endl;
			else
				cout << teen[h % 10] << endl;
		}
		else
		{
			if (m == 45)
			{
				cout << "quarter "; 
			}
			else if (60 - m > 10 && 60 - m < 20)
			{
				cout << teen[(60 - m) % 10];
				cout << "minutes ";
			}
			else 
			{				
				cout << tens[(60 - m) / 10] << ones[(60 - m) % 10];
				cout << "minute" << ((60 - m == 1) ? " " : "s ");
			}


			cout << "to ";
			if (h + 1 < 10)
				cout << ones[h + 1] << endl;
			else
				cout << teen[(h + 1) % 10] << endl;

		}
	}


	return 0;
}