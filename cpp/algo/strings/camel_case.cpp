//	Camel Case
//	Author: nabila_ahmed
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string s;
	cin >> s;

	int num_words = count_if(s.begin(), s.end(), [](char c){return isupper(c);}) + 1;

	cout << num_words << endl;

	return 0;
}