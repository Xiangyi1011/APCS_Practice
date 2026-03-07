#include <iostream>
using namespace std;

int add (int a, int b){
  int value = a + b;
  return value;
}

int main(){
  int a = 6789;
  int b = 9876;
  int value = add(a,b);

  cout << "a+b=" << value << '\n';

  //上下之value,a,b是不同的變數, 因為在不同的記憶體位址

}