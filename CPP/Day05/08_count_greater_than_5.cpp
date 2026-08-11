#include <iostream> 
 using namespace std;

 int main(){

    int count =0;

    for (int i=2; i<=10; i++){

        if(i>5){
            count++;
        }
    }
     cout << " Count greater than  "<< count << endl;
    return 0;
 }