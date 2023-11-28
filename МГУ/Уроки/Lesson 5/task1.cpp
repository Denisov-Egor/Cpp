#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int mass[10]={1,2,3,4,5,6,7,8,9,0};
    for (int i=0; i<10;i++){
        cout<<"i-"<<i<<endl;
        cout<<"mass-"<<mass[i]<<endl;
    }
}