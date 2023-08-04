#include<iostream>
#include<vector>
using namespace std ; 

void displayArray(vector<int> arr , int len){
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void appendValue(vector<int> arr , int &val , int len){
    arr.push_back(val);
    len++;
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertValue(vector<int> arr , int &val ,int &index ,  int len){
    if(index>=0 && index<len){
        len++;
        for(int i=len ; i>index; i--){
            arr[i] = arr[i-1]; 
    }
        arr[index] = val ; 
    }
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
void deleteValue(vector<int> arr , int &index ,  int len){
      if(index>=0 && index<len){
        int x = arr[index];
        for(int i=index ; i>len-1; i++){
            arr[i] = arr[i+1]; 
            len-- ;
    }
    }
    for(int i=0 ; i<len ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int> arr ; 
    int choice ,len ;
    bool flag = true ; 
    cout<<"Select the following Option: "<<endl;
    while(flag){
        cout<<"1. Enter Length of Array\n2. Enter Array Values\n3. Display Array\n4. Append Value\n5. Insert Value\n6. Delete Value\n7. Exist "<<endl;
        cout<<"Input = ";
        cin>> choice ; 

        if(choice == 1){ 
            cout<<"Length: ";
            cin>>len ; 
        }
        else if(choice == 2){ 
            int val ; 
            for(int i=0 ; i<len ; i++){
                cout<<"Val ["<<i<<"] : ";
                cin>>val ; 
                arr.push_back(val);
            }
        }
        else if(choice == 3){ 
            displayArray(arr , len);
        }
        else if(choice == 4){ 
            int val ; 
            cout<<"Enter Value to append: ";
            cin>>val;
            appendValue(arr , val , len);
        }
        else if(choice == 5){ 
            int val , index ; 
            cout<<"Enter Value: ";
            cin>>val;
            cout<<"Enter Index: ";
            cin>>index;
            insertValue(arr , val ,index , len);
        }
        else if(choice == 6){ 
            int index;
            cout<<"Enter Index: ";
            cin>>index;
            deleteValue(arr , index ,  len);
        }
        else if(choice == 7){ 
            flag = !flag;
        }
        else{
            cout<<"Enter a Valid Input";
        }

    }
}