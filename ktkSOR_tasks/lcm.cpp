#include <iostream>
using namespace std;

int main() {
  // 5,7
  int a, b, smallN, ans;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  // max can be 7 x 5 && min can be 5 ;
  if (a > b) {
    smallN = b;
  } else if (a == b) {
    ans = a;
  } else {
    smallN = a;
  }

  for (int i = a * b; i >= smallN; i--) {
    if (i % a == 0 && i % b == 0) {
      ans = i;
      break;
    }
  }

  cout << "LCM: " << ans;
}