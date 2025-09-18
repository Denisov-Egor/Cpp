#include <string>
#include <algorithm>
using namespace std;

bool isPalindrome(int x) 
{
    if (x < 0) return false; 
    
    string s = to_string(x);
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    
    return s == reversed;
}