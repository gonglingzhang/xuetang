/*
3-4  (1 满分)
题目描述
请编写程序计算输出从 1 到 N 共 N 个自然数的平方和（ P1.2 的升级版）
输入描述
自然数N
输出描述
1到N的平方和
样例输入
2
样例输出
5
*/
#include <iostream>
using namespace std;
int sum_of_squares(int a);
int main() {
	int N,res;
	cin >> N;
	res = sum_of_squares(N);
	cout << res << endl;
	return 0;
}
int sum_of_squares(int a){
	int count = 0;
	for (int i=0; i<=a; i++) {
		count += i*i;
	}
	return count;
}

