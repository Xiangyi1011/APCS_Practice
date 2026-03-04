#include <iostream>
#include <math.h>
using namespace std;

int math1(int x){ //一個整數參數
  int value = pow(x,2) + 2*x +1; //x^2+2x+1
  return value; //輸出依序存入value
}

int main() {
  for(int i=0; i<=10;i++){
    int result = math1(i); //將存入value的值依序輸出
    cout << "如果x=" << i << ",得到的值是" << result << '\n';
  }
  return 0;
}