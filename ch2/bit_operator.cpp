#include <iostream>
#include <bitset>
using namespace std;
/*The definition void main( ) { } is not and never 
has been C++, nor has it even been C.*/
int main() 
{
    cout << "~15 = "<<(~15)<<endl;
    cout << "15 & 21 ="<<(15&21)<<endl;
    cout << "15 ^ 21 ="<<(15^21)<<endl;
    cout << "15 | 21 ="<<(15|21)<<endl;
    unsigned int nTest = 9;
    cout <<"nTest ="<<nTest<<endl;
    nTest |= 1<<4; //将第4位置为1
    cout <<"After set the position 4 to 1, nTest ="<<nTest
            <<endl;
    nTest &= ~(1<<4); //将第4位置0
    cout <<"After set the position 4 to 0, nTest ="<<nTest<<endl;
    bool nFlag;
        for (int i=0; i<16; i++){ //实现翻转
		nFlag = nTest & (1<<i); //'1<<i': 将数字1左移i位
		if (nFlag) { // if true
			nTest &= ~(1<<i); // set value of ith bit to 0
		} else {      // if false
			nTest |= 1<<i; // set value of ith bit to 1
		}
    }
	cout <<"After flip, nTest = "<<nTest<<endl;
    return 0;
}        