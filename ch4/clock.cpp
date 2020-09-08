class Clock {
public:
	Clock(int newH,int newM,int newS);//构造函数
	void setTime(int newH, int newM, int newS);
	void showTime();
private:
	int hour, minute, second;
};
//构造函数的实现：
Clock::Clock(int newH, int newM, int newS): hour(newH), minute(newM), second(newS) {
	}
//建立对象时构造函数的作用：
int main() {
  Clock c(0,0,0); //此处将自动调用构造函数
  c.showTime();
	return 0;
}