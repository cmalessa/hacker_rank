//	Designer PDF Viewer
//	Author: darkshadows
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int a[26];
	for (int i = 0; i < 26; i++)
	{
		cin >> a[i];
	}

	string word;
	cin >> word;

	int maxHeight = 0;
	for (int i = 0; i < word.length(); i++)
	{
		if (maxHeight < a[word[i] - 'a'])
		{
			maxHeight = a[word[i] - 'a'];
		}
	}

	cout << word.length() * maxHeight;


	return 0;
}