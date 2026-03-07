#include <iostream>
using namespace std;

//取址運算子, ＆

int main(){
  int n = 5;
  n = 10;
  cout << "n=" << n << '\n';
  cout << "n的記憶體位址" << &n << '\n';
}