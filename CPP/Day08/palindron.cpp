#include <iostream>
using namespace std;

int main(){

    int num;
    int digit=0;
    int riverse=0;

    cout<<"enter a Number to check palindrone  : "<<endl;
    cin>> num;

    if (num<0){
        num=num*(-1);
    }
    int orignal=num;
     
    while(num>0){
        digit=num%10;
        riverse= riverse*10+digit;
        num=num/10;
        
    }
    if(riverse ==orignal){
        cout << "its Palindrome number "<<endl;
    }
    else {
        cout<<" Its Not Palindrone "<<endl;
    }
   
  
    return 0;

}