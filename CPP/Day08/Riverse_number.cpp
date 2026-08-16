#include <iostream>
using namespace std;

int main(){

    int num;
    int digit=0;
    int riverse=0;
    cout<<"enter a Number to Reverse : "<<endl;
    cin>> num;
    if (num<0){
        num=num*(-1);
    }
     
    while(num>0){
        digit=num%10;
        riverse= riverse*10+digit;
        num=num/10;
        
    }
    cout<<riverse <<endl;
  
    return 0;

}