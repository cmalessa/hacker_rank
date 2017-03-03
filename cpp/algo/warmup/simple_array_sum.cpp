//  Simple Array Sum
//  Author: shashank21j

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;


int main(void)
{
    int n, sum;
    cin >> n;
    

	vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }

    //	Sum vector<int>
    sum = accumulate(arr.begin(), arr.end(), 0);

    cout << sum;


    return 0;
}