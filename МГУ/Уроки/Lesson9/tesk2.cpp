#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("cash.txt",ios::trunc);
    for (int i=1;i<11;i++){
        for (int j=1;j<11;j++){
            file<<i*j<<"\n";
        }
    }
    file.close();
}