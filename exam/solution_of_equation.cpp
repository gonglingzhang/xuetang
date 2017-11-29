/*
题目描述
有形如AB*C+A=y的方程，其中ABC均可以取0-9的数字，y由输入给出，求可以使方程成立的ABC各是多少（答案唯一，ABC可以相同，但A不可为0）
以A=1，B=1，C=1为例，上式变为11*1+1=12，所以y=12时，A=B=C=1是使方程成立的一个解
输入格式
y
输出格式
依次输出A B C，空格隔开
样例输入
12
样例输出
1 1 1
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int* equate(int y);
int main() {
    int A,B,C,y;
    cin >> y;
    int *res = new int[3];
    res = equate(y);
    cout << res[0] << " " << res[1] << " " << res[2]  << " " << endl;
    return 0;
}
int* equate(int y) {
    int *res = new int[3];
    int A,B,C;
    int A_B;
    string str_A="",str_B="",str_A_B="";
    stringstream ss;
    for (int i=1; i<=9; i++) {
        A = i;
        ss << A;    str_A="";    ss >> str_A;    ss.clear();
        for (int j=0; j<=9; j++) {
            B = j;
            ss << B;    str_B="";   ss >> str_B;    ss.clear();
            str_A_B = "";   str_A_B += str_A;    str_A_B += str_B;  A_B=-999;   ss << str_A_B;  ss >> A_B;   ss.clear();
            for (int k=0; k<=9; k++) {
                C = k;
                if ((y-A) == (A_B*C)) {
                    res[0] = A;
                    res[1] = B;
                    res[2] = C;
                }
            }
        }
    }
    return res;
}
