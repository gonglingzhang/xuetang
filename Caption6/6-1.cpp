/*
 * 题目描述
 * 下n级台阶，每步可下1级或2级台阶。那么从n级台阶下到地面，共有多少种不同的下台阶方案？
 * 输入：n
 * 输出：方案数
 * 输入格式
 * 多行输入，每一行输入一个正整数n，表示n级台阶
 * 输出格式
 * 每一行输出n级台阶的方案数
 * 样例输入
 * 1
 * 2
 * 样例输出
 * 1
 * 2
 * */
#include <iostream>
using namespace std;
int Try(int n);
int main() {
    int c = 0;
    int res[10000];
    int cnt = -999;
    while(cin >> cnt) {
        res[c] = Try(cnt);
        c += 1;
    }
    for (int i=0; i<c; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
int Try(int n) {
    if (n==1) {
        return 1;
    } else if (n==2) {
        return 2;
    } else {
        return Try(n-1) + Try(n-2);
    }
}
