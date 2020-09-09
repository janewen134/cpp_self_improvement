#include<iostream>
using namespace std;
enum class Side{ Right, Left };
enum class Thing{ Wrong, Right };  //不冲突
enum class Type { General, Light, Medium, Heavy};
enum class Type: char { General, Light, Medium, Heavy};
int main()
{
Side s = Side::Right;
Thing w = Thing::Wrong;
// cout << (s == w) << endl;  //编译错误，无法直接比较不同枚举类
return 0;
}