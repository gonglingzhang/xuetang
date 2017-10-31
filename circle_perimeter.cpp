/*
题目描述
请编写程序计算输出任意半径的圆周长。要求半径从键盘输入，计算时以 3.14159 作为圆周率的值。
输入描述
输入半径为浮点型（float）
输出描述
输出周长，保留小数点后5位。
*/
#include <iostream>
#include <iomanip>
using namespace std;
const float kPI = 3.14159;
int main() {
	float r;
	cin >> r;
	cout << fixed << setprecision(5) << 2 * kPI * r << endl;
	return 0;
}
