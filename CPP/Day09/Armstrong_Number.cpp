#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a Number To check Armstrong : "<<endl;
    cin>>num;

    if(num<0){
        num=num*(-1);
    }
    int original =num;
    int digit=0;
    int sum=0;

    while (num>0){

        digit= num%10;
        sum=sum+digit*digit*digit;
        num=num/10;


    }

    if(sum==original){
        cout<<"Its An Armstrong Number."<<endl;
    }

    else{
        cout<<"Its Not An Armstrong Number. "<<endl;
    }

    return 0;
}