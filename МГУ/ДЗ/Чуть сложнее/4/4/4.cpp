#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() 
{
    vector<int> arr = { 4, 8, 15, 16, 23, 42 };
    vector<int> res;

    for (int i = 0; i < arr.size(); i++) {
        res.push_back(arr[i]);
    }

    reverse(res.begin(), res.end());

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }

    cout << endl;

    return 0;
}