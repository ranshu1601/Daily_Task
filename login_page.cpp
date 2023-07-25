#include <iostream>
#include <string>
using namespace std;




void addArray(string arr[], string username){
    for(int i=0 ; i<100 ; i++){
        if(!arr[i].empty()){
            arr[i]=username ; 
        }
        else continue ; 
    }

}

int main() {
  int n;
  string *arr = new string[100];
  string username, password, x, y;
  bool flag = true;
  while (flag) {
    cout << "Press 1 to Register " << endl;
    cout << "Press 2 to Login " << endl;
    cout << "Press 3 to exist " << endl;
    cout << "ENTER: ";
    cin >> n;
    
    
    
  }
}