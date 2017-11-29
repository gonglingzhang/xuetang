/*
题目描述
以递归方法求数组元素的和，要求分别求偶、奇下标的和，再求总和
注意：此题很明显用递归并不简便，但为了锻炼同学们递归的思想并熟练其用法，要求以递归方法解答。
输入格式
一行输入，数字以空格隔开，下标从0开始
输出格式
输出三行，第一行偶下标的和；第二行奇下标的和；第三行总和
样例输入
1 2 3 5 8 10
样例输出
12
17
29
*/
#include <iostream>
using namespace std;
int main() {
    int a[10000];
    int b;
    int cnt = 0;
    int even = 0,odd = 0;
    while (cin >> b) {
        a[cnt] = b;
        cnt++;
    }
    for (int i=0; i<cnt; i++) {
        if (i%2 == 0) {
            even += a[i];
        } else {
            odd += a[i];
        }
    }
    cout << even << endl;
    cout << odd << endl;
    cout << even+odd << endl;
    return 0;
}
