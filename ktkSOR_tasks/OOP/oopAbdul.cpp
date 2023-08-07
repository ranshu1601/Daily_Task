#include<iostream>
using namespace std ; 

// class rectangle{
//     int length;
//     int breadth;

//     int areaRect( ){
//         int area = length * breadth ; 
//         return area;
//     }

//     int periRect(){
//         int perimeter = 2 * (length+breadth);
//         return perimeter ;
//     }
    
// };

class Student{
    public:

        int adNum ; 
        int engMarks; 
        int mathMarks;
        int phyMarks;
        int chemMarks;

        int avgMarks();
        int percentage();
        Student(){
            engMarks = 0;
            phyMarks = 0;
            mathMarks = 0;
            chemMarks = 0;
        }

};
int Student::avgMarks(){
    int avg = (engMarks+phyMarks+mathMarks+chemMarks)/4 ; 
    return avg ; 
}

int Student::percentage(){
    int percent = 100* (engMarks+phyMarks+mathMarks+chemMarks)/160; 
    return percent; 
}

int main(){  
    Student ashu ; 
    int choice , val;
    bool flag=true ; 
    cout<<"-- -- -- REPORT CARD -- -- --\n";
    while(flag){
        cout<<"1. Enter Marks\n2. Average Marks\n3. Percentage\n4. Exist\n";
        cin>>choice ; 
        if(choice==1){
            cout<<"Chemistry: ";
            cin>>ashu.chemMarks;
            cout<<"Math: ";
            cin>>ashu.mathMarks;
            cout<<"Physics: ";
            cin>>ashu.phyMarks;
            cout<<"English: ";
            cin>>ashu.engMarks;
        }

        else if(choice==2){
            cout<<ashu.avgMarks();
        }
        else if(choice==3){
            cout<<ashu.percentage();
        }
        else if(choice==4){
            flag = !flag ; 
        }
        else {
            cout<<"Try Again! Please enter correct Choice";
        }
    }

}