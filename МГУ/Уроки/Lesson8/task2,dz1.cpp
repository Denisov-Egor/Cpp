#include <iostream>
using namespace std;
int main()
{
    cout<<"Введите количество отрезков "<<endl;
    int N;
    cin>>N;
    int a[N];
    for (int i=0;i<N;i++)
    {
        a[i]=rand()%10;
        cout<<a[i]<<" ";
    }
    cout<<"Введите значение отрезка "<<endl;
    int g=0;
    cin>>g;
    int k=0;
    for (int j=0;j<N;j++)
    {
        if (a[j]==g){
            cout<<"Номер отрезка "<<j<<endl;
            k+=1;
        }
    }
    if (k<1)
    {
        cout<<"Нет такого отрезка";
    }
}
