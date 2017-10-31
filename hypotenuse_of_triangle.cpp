/*
题目描述
请编写程序计算直角三角形的斜边长度，两条直角边的长度由键盘输入。
输入描述
两直角边均为浮点型（float），中间以一个空格隔开
输出描述
输出斜边长度，保留小数点后5位
*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	float a,b,c;
	cin >> a >> b;
	c = sqrt(a*a + b*b);
	cout << fixed << setprecision(5) << c << endl;
	return 0;
}
