/*
3-3  (1 满分)
题目描述
突然有一天，你忘记了今天是星期几，中国人凑吉利，所以你找来了八个人，让他们每人说两句话，第一句为今天星期几，另一句为今天不是星期几，并且两句中一句真，一句假。可能第一句是真，也可能第二句是真。最后请你确定今天是星期几，并输出。
输入描述
8行，每行是两个星期几的阿拉伯数字表示，用空格分开
输出描述
一个数字，表示今天星期几
样例输入
1 2
2 6
3 4
5 1
7 7
1 5
1 4
4 2
样例输出
7
*/
#include <iostream>
using namespace std;
int main() {
	int f,s;
	int is[8],not_is[8];
	for (int i = 0; i < 8; i++) {
		cin >> is[i] >> not_is[i];
	}
	for (int week=1; week<8; week++) {
		int num = 0;
		for (int i=0; i<8; i++) {
			f = is[i];
			s = not_is[i];
			if ( ((week==f)&&(week==s)) || ((week!=f)&&(week!=s)) )	{
				num++;
				if(num == 8) {
					cout << week << endl;
					break;
				}
			}
		}
	}
	return 0;
}
