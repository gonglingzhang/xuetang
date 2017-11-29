/*
3-5  (1 满分)
题目描述
请编写程序计算输出从 1 到 N 共 N 个自然数中所有模 4 余 1 且是 3 的倍数的那些数的总和
输入描述
自然数N
输出描述
和
样例输入
10
样例输出
9
*/
#include <iostream>
using namespace std;
void _4_1_3n(int a);
int main() {
	int N;
	cin >> N;
	_4_1_3n(N);
	return 0;
}
void _4_1_3n(int a) {
	int count = 0;
	for (int i=0; i<=a; i++) {
		if (i%4==1 && i%3==0) {
			count += i;
		}
	}
	cout << count << endl;
}
