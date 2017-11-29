/*
题目描述
请编写程序计算输出一元二次多项式 ax^2 + bx + c = 0 的两个根中较大的那一个，多项式的三个系数从键盘输入，保证均为正整数且一定有实根存在（b^2-4ac>=0)
输入描述
a，b，c均为整型，且以空格隔开
输出描述
输出较大根（两根相同输出该值即可），保留小数点后5位
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
float Solution(int a, int b, int c);
int main() {
	int a,b,c;
	cin >> a >> b >> c;
	float res;
	res = Solution(a,b,c);
    if (res != 0) {
        cout << fixed << setprecision(5) << res << endl;
    }
	return 0;
}
float Solution(int a, int b, int c) {
	float delt = b*b - 4*a*c;
	float x1 = (-b + sqrt(delt)) / (2*a);
	float x2 = (-b - sqrt(delt)) / (2*a);
	if (x1 > x2) {
		return x1;
	} else if (x2 >= x1) {
		return x2;
	} else {
		return 0;
	}
}
