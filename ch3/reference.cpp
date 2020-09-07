#include<iostream>
using namespace std;
void swap(int& a, int& b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int x = 5, y = 10;
    cout << x << ' ' << y << '\n';
    swap(x, y);
    cout << x << ' ' << y << '\n';
    return 0;
}