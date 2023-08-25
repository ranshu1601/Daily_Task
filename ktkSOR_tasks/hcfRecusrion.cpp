#include <iostream>
using namespace std;

int hcf(int num1, int num2) {
  if (num1 == 0) {
    return num2;
  } else if (num1 == num2 || num2 == 0) {
    return num1;
  } else if (num1 > num2) {
    return hcf(num1 % num2, num2);
  } else {
    return hcf(num1, num2 % num1);
  }
}

int main() {
  
  int num1, num2;
  cout << "Enter num1: ";
  cin >> num1;
  cout << "Enter num2: ";
  cin >> num2;
  cout << hcf(num1, num2);
}
