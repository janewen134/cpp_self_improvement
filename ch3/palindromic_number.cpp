#include <iostream>
using namespace std;
// check if the parameter is a palindromic number
bool symm(unsigned n) {
    unsigned i = n;
    unsigned m = 0;
    while (i > 0) {
        m = m * 10 + i % 10;
        i /= 10;
    }
    // 太愚蠢了，找了半天错，原来是把==写成=了。主要这玩意它不给你报错很坑啊。
    // 吐槽的注释不敢用英语写，用汉语出出气得了。气死我了。
    return m == n;
}
int main() {
    for (unsigned m = 11; m < 1000; m++) {
        if (symm(m) && symm(m*m) && symm(m*m*m)) {
            cout << m << endl;
        }
    }
    return 0;
}