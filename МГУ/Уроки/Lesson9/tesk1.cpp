#include <iostream>
using namespace std;
template <class i,class f>
f min(i a, f b){
    if (a<b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int x=20;
    float y=19.9;
    cout<<min(x,y)<<endl;
    char d='5';
    char b='0';
    cout<<min(d, b)<<endl;
}