//	Append and Delete
//	Author: zemen
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s, t;
	int i, k, m, r;
	cin >> s >> t >> k;

	if(s.length() + t.length() <= k)
	{
        cout << "Yes";
    }
    else
    {
		m = t.length() > s.length() ? s.length() : t.length();

		for(i = 0; i < m; i++)
		{
		    if (s[i] != t[i])    
		    {
		    	break;
		    }
		}

		r = k - (s.length() - i + t.length() - i);

		if (r >= 0 && r % 2 == 0)
		{
	    	cout << "Yes";
		}
		else
		{
		    cout << "No";
		}
	}


	return 0;
}