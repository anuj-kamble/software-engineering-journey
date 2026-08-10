#include <iostream>
using namespace std;

int main(){

    int age ;
    bool educationcompleted;

    cout << " Eligibility Check : "<<endl;

    cout << " Enter Your Age  (ex. 23):  " <<endl;
    cin >> age;

    cout << "Have You Completed Your Education 1=yes, 0= No : "<<endl;
    cin >> educationcompleted;

    if( age>=18 && educationcompleted){
        cout<<"You Are Eligible To Apply "<<endl;
    }
    else
     {
        cout<< " You Are Not Eligible To Apply "<<endl;
    }

     return 0;
}