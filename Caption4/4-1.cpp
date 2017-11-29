/*
4-1  (1 满分)
题目描述
（再次申明：本上机题全部由程序自动评判对错，所以没有要求的输出请一定不要出现，具体参照样例输入和输出即可）
输入两个正整数a、b，找出[a, b]之间的素数，由小到大输出。(2 <= a <= b <=1000000)
输入描述
每一行输入两个正整数，两数之间有一个空格，可能有多行输入!
tips：利用while(cin>>a>>b)语句实现循环输入变量
输出描述
输出[a,b]之间的素数，素数之间用一个空格隔开，每个输出占一行
样例输入
2 5
3 11
样例输出
2 3 5
3 5 7 11
*/
#include <iostream>
#include <cmath>
using namespace std;
bool Is_prime(int a);
void output(int a, int b);
int main() {
	int a,b;
	int *store_a = new int;
	int *store_b = new int;
	int cnt = 0;
	char s1, s2;
	while(cin >> a >> b) {
		if (a != '\n' && b != '\n') {
			store_a[cnt] = a;
			store_b[cnt] = b;
			cnt++;
		}
	}
	for (int i=0; i<cnt; i++) {
		output(store_a[i],store_b[i]);
	}
	return 0;	
}
bool Is_prime(int a) {
	bool flag = true;
	if (a == 2) {
		flag = true;
	} else {
		for (int i=2; i<=sqrt(a); i++) {
			if (a%i == 0) {
				flag = false;
				break;
			}	
		}
	}
	return flag;
}
void output(int a, int b) {
	for (int i=a; i<=b; i++) {
		if (Is_prime(i)) {
			cout << i << " ";
			continue;
		}
	}
	cout << endl;
}
