/*
*4-2  (2 满分)
题目描述
清华附小期末考试结束后，分别由数学、语文、英语按照学号顺序输入30名同学的成绩，班主任想知道三门课总分的最高分和最低分，以及取得总分最高分和最低分的两位同学的编号。（输入数据保证没有同分情况，编号由1到30）
输入描述
第一行输入编号为1-30的30位同学的数学成绩，分数之间用空格隔开；第二行输入语文成绩，第三行输入英语成绩
输出描述
输出四个数，分别是总分最高分，总分最低分，取得最高分同学的编号，取得最低分同学的编号
样例输入
100 99 99 99 99 ... 98 97 90 60
100 98 97 96 95 ... 97 96 98 60
100 90 90 90 90 ... 96 95 94 60
样例输出
300 180 1 30
*/
#include <iostream>
using namespace std;
int main() {
	int math[30], chinese[30], english[30];
	int max = 0, min = 300, max_id, min_id;
	for (int i=0; i<30; i++) {
		cin >> math[i];
	}
	for (int i=0; i<30; i++) {
		cin >> chinese[i];
	}
	for (int i=0; i<30; i++) {
		cin >> english[i];
	}
	for (int i=0; i<30; i++) {
		int tmp = 0;
		tmp = math[i] + chinese[i] + english[i];
		if (tmp > max) {
			max = tmp;
			max_id = i+1;
		}
		if (tmp < min) {
			min = tmp;
			min_id = i+1;
		}
	}
	cout << max << " " << min << " " << max_id << " " << min_id << endl;
	return 0;
}
