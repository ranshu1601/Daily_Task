#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std ;

bool findValue(vector<string> &v, int n, string data){
    for(int i=0 ; i<n; i++){
        if(v[i]==data){
            return true;
            break ; 
        }
        else{
            continue ; 
        }
    }
    return false ; 
}

int main() {
  vector<string> username ; 
  vector<string> password ;

  bool flag = true;
  int n;
  string x, y, p, q;

  while (flag) {
    cout << "Press 1 to Register " << endl;
    cout << "Press 2 to Login " << endl;
    cout << "Press 3 to exist " << endl;
    cout << "ENTER: ";
    cin >> n;

    if (n == 1) {
      cout << endl << "Registration Page" << endl << endl;
      cout << "Enter Username [in string format]: ";
      cin >> x;
      username.push_back(x);
      cout << "Enter Password [in string format]: ";
      cin >> y;
      password.push_back(x);
      cout << "Registration Done" << endl;
      continue;

    }

    else if (n == 2) {
      cout << endl << "Enter Login Details " << endl;
      cout << "Username: ";
      cin >> p;
      cout << "Password: ";
      cin >> q;
      bool resultU = findValue(username, username.size(), p) ;
      bool resultP = findValue(password, password.size(), q) ;

      if (resultP && resultU ) {
        cout << "Logged In Successfully " << endl << endl;
      } else if (resultU && !resultP) {
        cout << "Wrong Password " << endl << endl;
      } else if (!resultU && resultP) {
        cout << "Wrong Username " << endl << endl;
      } else
        cout << "Both are wrong values" << endl << endl;
      continue;
    }

    else {
      cout << endl << "Have a good day !!";
      flag = !flag;
      break;
    }
  }
}