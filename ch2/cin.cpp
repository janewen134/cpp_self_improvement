#include <iostream>
using namespace std;
int a = 123;
int main() {
    const double pi(3.14159);
    int radius; // should declare type of radius before enter its value by keyboard
    cout << "Please enter the radius!\n";
    cin >> radius;
    cout << "Please enter another radius" << '\n';
    cin >> radius;
    cout << "The final radius value is: " << radius << endl;
    cout << "The value of pi is: " << pi << '\n';
    return 0;
}