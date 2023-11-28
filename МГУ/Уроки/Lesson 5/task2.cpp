#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{
    int m2[5][5];
    for (int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cin>>m2[i][j];
        }
    }
    for (int a=0;a<5;a++)
    {
        int k=0;
        for (int b=0;b<5;b++)
        {
            cout<<m2[a][b]<<" ";
            k=k+m2[a][b];
        }
        cout<<k;
        cout<<endl;
        
    }
} 