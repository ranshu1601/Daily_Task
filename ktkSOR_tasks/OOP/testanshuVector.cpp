#include "anshuVector.h"
#include <iostream>

using namespace std;

int main() {
  anshuVector ktk;
  ktk.push_back(101);
  ktk.push_back(104);
  ktk.push_back(103);
  ktk.push_back(102);
  ktk.insert(2, 9);
  ktk.display();
  cout << "\n" << ktk.at(2) << "\n";
  ktk.pop_back();
  ktk.display();
  ktk.pop_at(1);
  cout << "\n";
  ktk.display();
  ktk.reverse();
  cout << "\n";
  ktk.display();
  cout << "\n" << ktk.min() << "\n" << ktk.max() << "\n" << ktk.find(9)<< "\n" << ktk.get(2);
}