//	Grading Students
//	Author: Nabila Ahmed
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int grade;
	for (int i = 0; i < n; i++)
	{
		cin >> grade;
		if (grade >= 38 && abs(grade - ceil((float)grade / 5) * 5) < 3)
		{
			cout << ceil((float)grade/5) * 5 << endl;
		}
		else
		{
			cout << grade << endl;
		}
	}

	return 0;
}