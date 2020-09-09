#include <iostream>
using namespace std;
class Clock {
    public:
        Clock(int newH, int newW, int newS); // constructor
        void setTime(int newH, int newM, int newS);
        void showTime();
    private:
        int hour, minute, second;    
};
//构造函数的实现：
// the former Clock refers to the Class, and the latter the constructor method
// constructor doesn't have return type
Clock::Clock(int newH, int newM, int newS): hour(newH), minute(newM), second(newS) 
{}

// constructor above is same as below:

// Clock::Clock(int newH, int newM, int newS) {
//     hour = newH;
//     minute = newM;
//     second = newS;

// }

void Clock::setTime(int newH, int newM, int newS) {
    hour = newH;
    minute = newM;
    second = newS;
}

void Clock::showTime() {
    cout << hour <<' '<< minute << ' '<< second << endl;
}

//建立对象时构造函数的作用：
int main() {
    Clock c(0, 0, 0);
    c.showTime();
    c.setTime(1,1,1);
    c.showTime();
    return 0;
}