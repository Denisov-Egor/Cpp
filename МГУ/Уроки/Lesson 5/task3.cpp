#include <iostream>
#include <typeinfo>
using namespace std;

  void del(int num_1, int num_2){
    if (num_2 == 0){
      cout<<"На ноль делить нельзя!"<<endl;
        
    }else{
      cout<<"Частное чисел "<<num_1<<" и "<<num_2<<" равно "<<num_1/num_2<<endl;
    }
    }
int main(){
  int a, b;
  cout<<"Введите превое число:"<<endl;
  cin>>a;
  cout<<"Введите второе число:"<<endl;
  cin>>b;
  del(a, b);
  return 0;
}