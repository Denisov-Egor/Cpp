#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    vector<int> arr = { 4, 3, 7, 11, 2 };
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int max_sum = arr[n - 1] + arr[n - 2];

    cout << "Максимальная сумма: " << max_sum << endl;

    return 0;
}