/*
题目描述
P3.1 四个人比块头大，每人说了一句话。
A说：不是我。
B说：是C。
C说：是B。
D说：他胡说。
已知这四个人有3人说了真话。请你编程找出谁是块头最大的人，输出相应的大写字母。
输入描述
无
输出描述
只输出大写字母(注意：大写！！！）。
(再次强调：程序只能输出答案，不能输出任何描述性文字!)
*/
#include <iostream>
using namespace std;
int main() {
	for (char big = 'A'; big <= 'D'; big++) {
		int count = 0;
		if (big != 'A')	{
			count++;
		}
		if (big == 'C') {
			count++;
		}
		if (big == 'B') {
			count++;
		}
		if (big != 'B') {
			count++;
		}
		if (count == 3) {
			cout << big << endl;
		}
	}
	return 0;
}
