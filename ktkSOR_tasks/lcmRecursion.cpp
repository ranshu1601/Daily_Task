#include <iostream>
using namespace std;

int hcf(int num1, int num2) {
  if (num2 == 0) {
    return num1;
  }
  return hcf(num2, num1 % num2);
}

int lcm(int num1, int num2) { return (num1 * num2) / hcf(num1, num2); }
int main() {

  int num1, num2;
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
  cout << "Ans:" << hcf(num1, num2);
}
