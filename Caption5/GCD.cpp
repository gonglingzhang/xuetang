/*
最大公约数  (1 满分)
题目描述
以递归思想计算最大公约数gcd(m,n)。
tips：若m%n等于0，则gcd(m,n)等于n；否则gcd(m,n)=gcd(n,m%n)
输入格式
每一行输入两个数m,n（均为正整数），中间以空格隔开，可能会有多行输入
输出格式
输出最大公约数
样例输入
12 16
9 7
2 10
样例输出
4
1
2
*/
#include <iostream>
using namespace std;
int gcd(int m, int n);
int main() {
    int m,n,res[999];
    int cnt = 0;
    while (cin >> m >> n) {
        res[cnt] = gcd(m,n);
        cnt++;
    }
    for (int i=0; i<cnt; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
int gcd(int m, int n) {
    int a,b;
    if (m%n == 0) {
        return n;
    } else {
        a = n;
        b = m%n;
        gcd(a,b);
    }
}
