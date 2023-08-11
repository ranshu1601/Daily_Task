#include "anshuVector.h"
#include "anshuNode.h"
#include <iostream>

using namespace std;

int main() {
  // anshuVector<int> ktk;

  // ktk.push_back(101);
  // ktk.push_back(104);
  // ktk.push_back(103);
  // ktk.push_back(102);
  // ktk.insert(2, 9);
  // ktk.display();
  // cout << "\n" << ktk.at(2) << "\n";
  // ktk.pop_back();
  // ktk.display();
  // ktk.pop_at(1);
  // cout << "\n";
  // ktk.display();
  // ktk.reverse();
  // cout << "\n";
  // ktk.display();
  // cout << "\n" << ktk.min() << "\n" << ktk.max() << "\n" << ktk.find(9)<< "\n" << ktk.get(2);

  int arr[] = {1, 2, 3, 4, 5};
  anshuNode<int> ktk;
  ktk.createLL(arr, 5);
  ktk.displayLL();
  cout << "\n" << ktk.min();
  cout << "\n" << ktk.max();
  cout << "\n" << ktk.countNode();
  cout << "\n" << ktk.isPresent(1);
  cout << "\n";
  ktk.insertAfter(4, 9);
  ktk.displayLL();
  cout << "\n";
  ktk.insertHead(7);
  ktk.displayLL();
  cout << "\n";
  ktk.popAt(3);
  ktk.displayLL();
  cout << endl;
  ktk.reverseLL();
  ktk.displayLL();
  cout << endl;
}
