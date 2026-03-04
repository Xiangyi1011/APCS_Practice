#include <iostream>
using namespace std;

void function1(){ //void 表示沒有回傳值（傳出值）
  cout << "我是function1" << '\n';
}
  void function2(){
    cout << "我是function2" << '\n';
}


//有傳出值-float--有參數則回傳
//制定一個function
float temperature(int value) { //整數參數名稱value
return 1.8*value+32; //回傳值（傳出值）
}


int main() {
  //呼叫自訂function1,2
  function1();
  function2();

  int celsius; //宣告變數（參數）
  float fahrenheit; //宣告變數(接收)
  cout << "請輸入攝氏溫度:";
  cin >> celsius; //輸入值
  fahrenheit = temperature(celsius);
  //呼叫自訂function,並傳入參數至接收的變數內
  //temperature短暫記憶體接收輸入參數
  cout << "華氏溫度為:" << fahrenheit << '\n'; //輸出
  return 0;
}