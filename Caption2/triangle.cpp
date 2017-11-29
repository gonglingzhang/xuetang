/*
题目描述
已知一个三角形的底边为 4 ，高需要从键盘输入，请编写程序计算并输出指定高度的三角形面积。
输入描述
输入的三角形的高为浮点类型（float）
输出描述
输出三角形面积，保留小数点后2位
*/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int l = 4;
	float h;
	cin >> h;
	cout << fixed << setprecision(2) << l * h / 2 << endl;
	return 0;
}
