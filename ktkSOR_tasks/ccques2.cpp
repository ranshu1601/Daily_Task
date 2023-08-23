#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t > 0) {

    int num;
    cin >> num;
    cout << 3;
    if (num != 1) {
      while (num - 1 > 0) {
        cout << 0;
        num--;
      }
      cout << "\n";
    } else {
      cout << "\n";
    }
    t--;
  }
  return 0;
}
