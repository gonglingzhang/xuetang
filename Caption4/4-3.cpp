/*
4-3  (2 满分)
题目描述
输入20个整数，输出其中出现了多少个不相同的数
输入格式
1行20个整数，用空格分开
输出格式
一个数字，表示多少个不相同的数
样例输入
1 1 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
样例输出
19
*/
#include <iostream>
using namespace std;
int main() {
	int *output = new int;
	for (int i=0; i<20; i++) {
		cin >> output[i];
	}
	for (int i=0; i<20; i++) {
		for (int j=i+1; j<20; j++) {
			if (output[i] == output[j]) {
				output[j] = -1;
			}
		}
	}
	int count = 0;
	for (int i=0; i<20; i++) {
		if (output[i] != -1) {
			count++;
		}
	}
	cout << count << endl;
}
