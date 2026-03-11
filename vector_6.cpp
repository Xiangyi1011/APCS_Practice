#include <iostream>
#include <vector>
using namespace std;
//vector實體的功能
//push_back() -> 動態將元素加入vector的最後面
//size() -> 取得vector的元素個數

int main(){
  vector<int> list; //沒有任何元素的vector實體
list.push_back(10);//vector的實體方法push_back()功能
  list.push_back(20);
  list.push_back(30);
  list.push_back(40);
  list.push_back(50);
  cout << "元素的數量是：" << list.size() << '\n';
  for(int i=0; i<list.size(); i++){ //vector的實體方法size()功能
    cout << list[i] << '\n';
  }
}