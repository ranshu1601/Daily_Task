#include <iostream>
using namespace std;

void hcf(int a, int b) {
  while (b % a) {
    int temp = a;
    a = b % a;
    b = temp;
  }
  cout << a;
}

int main() {
  int a, b;
  cout<<"enter a: ";
  cin >> a ;
  cout<<"enter b: ";
  cin>> b;
  hcf(a, b);
}