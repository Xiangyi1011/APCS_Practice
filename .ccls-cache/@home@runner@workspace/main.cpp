#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  bool sol = false; //bool判斷 sol狀態 預設為false
  cin >> a >> b >> c; //c為運算結果
  if ((a && b)==c && (sol==true)) cout << "and" << '\n';
  if ((a || b)==c && (sol==true)) cout << "or" << '\n';
  if (((a && !b)||(!a && b))==c && (sol==true)) cout << "xor" << '\n'; //!x && y ,意思為x不成立 但y成立 ; sol=true 時才會輸出
  if (!sol) cout << "impossible" << endl; //sol=false時輸出, 因為前面的if條件皆不成立
  return 0; //正常結束
}