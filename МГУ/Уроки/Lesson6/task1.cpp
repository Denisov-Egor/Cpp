#include <iostream>
#include <iomanip>

using namespace std;

void print_map(int width, int height) {
  for (int i = 0; i < width; i++) {
    cout << "#";
  }
  cout << endl;
  for (int i = 1; i < height - 1; i++) {
    for (int j = 0; j < width; j += width - 1) {
      cout << setw(j) << "#";
    }
    cout << endl;
  }
  for (int i = 0; i < width; i++) {
    cout << "#";
  }
}

int main()
{
  int width, height;
  cin >> width >> height;
  print_map(width,height);
}