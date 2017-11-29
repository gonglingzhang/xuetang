/*
题目描述
已知f(n, 0) = 1, f(n,n) = 1
当n>m>0时，f(n,m) = f(n-1,m-1) + f(n-1, m)
求f(a, b)
输入格式
多行输入，每一行输入两个正整数a, b (1 <= b <= a <= 10),a，b以空格隔开
输出格式
每一行输出f（a，b）值
样例输入
2 2
3 2
样例输出
1
3
*/
#include <iostream>
using namespace std;
int f(int a, int b);
int main() {
    int a,b;
    int res[100000];
    int cnt = 0;
    while(cin >> a >> b) {
        res[cnt] = f(a,b);
        cnt++;
    }
    for (int i=0; i<cnt; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
int f(int a, int b) {
    if (a == b || b == 0) {
        return 1;
    } else {
        return f(a-1,b-1) + f(a-1,b);
    }
}
