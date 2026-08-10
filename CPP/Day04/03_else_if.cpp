#include <iostream>
using namespace std;

int main (){

    int age ;
    cout << " Enter Your Age "<< endl;
    cin >> age;

    if (age >=18)
    {
        cout<< " Adult "<<endl;
    }
     else if (age >=13)
     {

        cout<< " Teenager "<<endl;
     }
     else 
     {
        cout<<" Minor"<<endl;
     }

    return 0;
}