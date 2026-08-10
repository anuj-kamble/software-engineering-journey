#include <iostream> 
using namespace std;

int main(){

    int age ;
    bool hasID;

    cout << " Enter Your Age : " << endl;
    cin >> age; 

    cout << " Do You Have an ID ?(1=Yes , 0=No) :  "<<endl;
    cin >> hasID;   

    if(age>=18){
        if(hasID){
            
            cout << "entry Allowed "<<endl;
        }
        else
        {
            cout <<"ID Required "<<endl;
        }
    }
    else 
    {
        cout << "Too Young "<< endl;
    }


    return 0;
}