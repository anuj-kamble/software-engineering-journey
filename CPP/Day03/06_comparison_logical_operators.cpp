#include <iostream>
using namespace std;

int main()
{
    int age = 23;
    int limit = 60;

    // Comparison operators
    cout << "Comparison Operators:" << endl;
    cout << "age == 23: " << (age == 23) << endl;
    cout << "age != 20: " << (age != 20) << endl;
    cout << "age > 18: " << (age > 18) << endl;
    cout << "age < 30: " << (age < 30) << endl;
    cout << "age >= 23: " << (age >= 23) << endl;
    cout << "age <= 60: " << (age <= 60) << endl;

    // Logical operators
    cout << endl;
    cout << "Logical Operators:" << endl;
    cout << "age >= 18 && age <= 60: "
         << (age >= 18 && age <= limit) << endl;

    cout << "age < 18 || age > 60: "
         << (age < 18 || age > limit) << endl;

    cout << "!(age == 23): "
         << !(age == 23) << endl;

    return 0;
}