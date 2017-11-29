/*
题目描述
P3.2 四个人比饭量小，每人说了一句话。
A说：不是我。
B说：是C。
C说：是D。
D说：他胡说。
已知这四个人只有1人说了真话。请你编程找出谁是饭量最小的人，输出相应的大写字母。
输入描述
无
输出描述
只输出大写字母
*/
#include <iostream>
using namespace std;
int main() {
	for (char small = 'A'; small <= 'D'; small++) {
		int count = 0;
		if (small != 'A') {
			count++;
		}
		if (small == 'C') {
			count++;
		}
		if (small == 'D') {
			count++;
		}
		if (small != 'D') {
			count++;
		}
		if (count == 1) {
			cout << small << endl;
		}
	}
}
