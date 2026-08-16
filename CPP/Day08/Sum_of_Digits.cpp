#include <iostream>

using namespace std;

int main(){


    int num;
    int sum=0;
    int digit=0;

    cout << "Enter the number to check the sum of digits: "<<endl;
    cin>> num;

    if(num<0){
        num=num*(-1);
    }
    
    while(num>0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
      cout<<sum<<endl;
    return 0;
}