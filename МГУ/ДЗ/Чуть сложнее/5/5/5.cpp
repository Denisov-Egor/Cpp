#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n; 
	vector<int> arr(n);
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	map<int, int> m; 
	for (int i = 0; i < n; ++i) {
		m[arr[i]]++;
	}

	int count = 0; 
	for (auto i = m.begin(); i != m.end(); ++i) {
		if (i->second > 1) { 
			count++;
		}
	}

	cout << count << endl; 

	return 0;
}