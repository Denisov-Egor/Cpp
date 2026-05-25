#include <iostream>
using namespace std;

int main() {
    int arr[] = { 8, 5, 3, 9, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_element = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }
    cout << "Minimum element of array: " << min_element << endl;
    return 0;
}