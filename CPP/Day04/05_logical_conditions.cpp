#include <iostream>
using namespace std;

int main(){

    int age ;
    bool hasID;
    bool hasPermission;

    cout<< " Enter Your Age : "<< endl;
    cin >> age ;

    cout << " Do you have ID ? (1= yes, 0= no : )"<<endl;
    cin>> hasID;

    cout <<" Do you have special permission? (1 = Yes, 0 = No):"<<endl;
    cin>> hasPermission;

    if(age>=18 && hasID){
        cout<<" Normal Entry Allowed "<<endl;
    }
    else if(hasPermission){
        cout<<" special Entry Allowed "<<endl;
    }
    else {
        cout<<" entry denied"<<endl;
    }

    return 0;
}