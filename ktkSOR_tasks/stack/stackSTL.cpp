#include<stack>
#include<string>
#include<iostream>

using namespace std ;

int main(){
    stack<int> ktk ;
    ktk.push(10);
    ktk.push(20);
    ktk.push(30);
    cout<<ktk.top()<<" "<<ktk.empty()<<" "<<ktk.size();
}