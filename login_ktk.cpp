// Login workflow using Array (Use hashmap for optimal approach)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> usernames;
  vector<string> passwords;
  int choice = 1;
  int numberOfUsers = 0;
  while (choice) {
    cout << "Welcome to Login-Check >>>>\n";
    cout << "Select :\n1. Register\n2. Login\n3. Update Password\n0. Exit\n";
    cin >> choice;
    if (choice == 1) {
      string tempUsername;
      string tempPassword;
      cout << "Enter username : ";
      cin >> tempUsername;
      bool doesUserAlreadyExist = false;
      for (int i = 0; i < numberOfUsers; i++) {
        if (usernames[i] == tempUsername) {
          cout << "Username already exists" << endl;
          doesUserAlreadyExist = true;
          break;
        }
      }
      if (doesUserAlreadyExist == false) {
        cout << "Enter password : ";
        cin >> tempPassword;
        usernames.push_back(tempUsername);
        numberOfUsers++;
        passwords.push_back(tempPassword);
      }
    } else if (choice == 2) {
      string tempUsername;
      string tempPassword;
      cout << "Enter username : ";
      cin >> tempUsername;
      bool userFound = false;
      for (int i = 0; i < numberOfUsers; i++) {
        if (usernames[i] == tempUsername) {
          cout << "Enter password : ";
          cin >> tempPassword;
          if (passwords[i] == tempPassword) {
            cout << "Logged In Successfully!" << endl;
          } else {
            cout << "Incorrect Password!" << endl;
          }
          userFound = true;
          break;
        }
      }
      if (userFound == false) {
        cout << "User not found" << endl;
      }
    } else if (choice == 3) {
      string tempUsername;
      string tempPassword;
      string confirmPassword;
      cout << "Enter username : ";
      cin >> tempUsername;
      bool userFound = false;
      for (int i = 0; i < numberOfUsers; i++) {
        if (usernames[i] == tempUsername) {
          cout << "Enter previous password : ";
          cin >> tempPassword;
          if (passwords[i] == tempPassword) {
            cout << "Enter new password : ";
            cin >> tempPassword;
            cout << "Confirm Password : ";
            cin >> confirmPassword;
            if (confirmPassword == tempPassword) {
              passwords[i] = confirmPassword;
              cout << "Password Updated!" << endl;
            } else
              cout << "Error Try Again!" << endl;
          } else {
            cout << "Incorrect Password!" << endl;
          }
          userFound = true;
          break;
        }
      }
      if (userFound == false) {
        cout << "User not found" << endl;
      }
    }
  }
}