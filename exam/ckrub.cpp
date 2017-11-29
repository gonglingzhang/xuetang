/*
题目描述
经典的鸡兔同笼问题，现在请你用循环的方法解决。
假设共有鸡兔N只，脚数共有M只，利用循环编写程序求鸡和兔的数量。
输入格式
两个正整数N，M，用空格隔开。N,M均小于100。
输出格式
两个整数，分别代表鸡和兔的个数
样例输入
30 90
样例输出
15 15
*/
#include <iostream>
using namespace std;
void print(int N, int M);
int main() {
    int N,M;
    cin >> N >> M;
    print(N,M);
    return 0;
}
void print(int N, int M) {
    int c=0,r=0;
    for (int i=0; i<=N; i++) {
        for (int j=0; j<=N; j++) {
            if ((i+j)==N && (2*i+4*j)==M) {
                c = i;
                r = j;
            }
        }
    }
    cout << c << " " << r << endl;
}
