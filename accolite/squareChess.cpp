#include <iostream>
using namespace std;

//  Program to find number of squares in a chessboard

int main() {
  int val;
  cout << "Enter N in N X N: ";
  cin >> val;
  int i = val, sum = 0;
  while (i >= 0) {
    sum = sum + (i * i);
    i--;
  }
  cout << "the sum is :" << sum;
}