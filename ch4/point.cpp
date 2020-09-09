#include <iostream>
using namespace std;
class Point {   //Point 类的定义
    public:
        Point(int xx=0, int yy=0) { x = xx; y = yy; }    //构造函数，内联
        Point(const Point& p); //复制构造函数
        void setX(int xx) {x=xx;}
        void setY(int yy) {y=yy;}
        int getX() const { return x; } //常函数（第5章）
        int getY() const { return y; } //常函数（第5章）
    private:
        int x, y; //私有数据
};
//成员函数的实现
Point::Point (const Point& p) {
  x = p.x;
  y = p.y;
  cout << "Calling the copy constructor " << endl;
}
//形参为Point类对象的函数
void fun1(Point p) {
	cout << p.getX() << endl;
}
//返回值为Point类对象的函数
Point fun2() {
	Point a(1, 2);
	return a;
}
//主程序
int main() {
	Point a(4, 5);	//第一个对象A
	Point b = a;	//情况一，用A初始化B。第一次调用复制构造函数
    Point c(a);
    Point& d = a;
    cout << &a << endl;
    cout << &b << endl; // different address with a
    cout << &c << endl; // different address with a
    cout << &d << endl; // same address with a
	cout << b.getX() << endl;
	fun1(b);	//情况二，对象B作为fun1的实参。第二次调用复制构造函数
	b = fun2();	//情况三，函数的返回值是类对象，函数返回时调用复制构造函数
	cout << b.getX() << endl;
	return 0;
}