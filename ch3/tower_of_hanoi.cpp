/* 而实现分治思想的常用方法就是递归。不难发现，如果原问题可以分解成若干个与原问题结构相同但规模较小的子问题时，往往可以用递归的方法解决。具体解决办法如下：

n = 1 时，直接把盘子从 A 移到 C；
n > 1 时，
先把上面 n - 1 个盘子从 A 移到 B（子问题，递归）；
再将最大的盘子从 A 移到 C；
再将 B 上 n - 1 个盘子从 B 移到 C（子问题，递归）。

链接：https://leetcode-cn.com/problems/hanota-lcci/solution/tu-jie-yi-nuo-ta-de-gu-shi-ju-shuo-dang-64ge-pan-z/
*/

#include <iostream>
using namespace std;

//把src针的最上面一个盘子移动到dest针上
void move(char src, char dest) { 
	// cout << src << " --> " << dest << endl;
    cout << src << "-->" << dest << endl;
}

//把n个盘子从src针移动到dest针，以medium针作为中介
void hanoi(int n, char src, char medium, char dest) {
	// if (n == 1)
	//   move(src, dest);
	// else {
    //   // recursion
	//   hanoi(n - 1, src, dest, medium);
	//   move(src, dest);
	//   hanoi(n - 1, medium, src, dest);
	// }
    if (n == 1) {
        move(src, dest);
    }
    else {
        hanoi(n - 1, src, dest, medium);
        move(src, dest);
        hanoi(n - 1, medium, src, dest);
    }
}
int main() {
	int m;
	cout << "Enter the number of diskes: ";
	cin >> m;
	cout << "the steps to moving " << m << " diskes:" << endl;
	hanoi(m,'A','B','C');
	return 0;
}