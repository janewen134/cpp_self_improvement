#include <iostream>
//The header <iomanip> is part of the Input/output library 
//of the C++ Standard Library. 
//It defines the manipulator functions resetiosflags() , 
//setiosflags() , setbase() , setfill() , setprecision() , 
//and setw() . These functions may be conveniently used by C++ 
//programs to affect the state of iostream objects.
#include <iomanip>
#include <string>
using namespace std;

struct Student {	//学生信息结构体
	int num;		//学号
	string name;	//姓名，字符串对象，将在第6章详细介绍
	char sex;		//性别
	int age;		//年龄
};
int main() {
	Student stu = { 97001, "Lin Lin", 'F', 19 };
	cout << "Num:  " << stu.num << endl;
	cout << "Name: " << stu.name << endl;
	cout << "Sex:  " << stu.sex << endl;
	cout << "Age:  " << stu.age << endl;
	return 0;
}