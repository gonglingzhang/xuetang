/*
题目描述
输入三个1-9的互不相同的数字，求出所有由这三个数字组成的，且各位数字各不相同的三位数
输入格式
三个1-9的数字，用空格隔开
输出格式
每行一个三位数，将所有符合条件的数输出,按字典序排列
样例输入
7 8 9
样例输出
789 
798
...
*/
#include <iostream>
#include <sstream>
using namespace std;
void print(int a, int b, int c);
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    print(a,b,c);
    return 0;
}
void print(int a, int b, int c) {
    string arr[10];
    string str="",A,B,C;
    stringstream ssa,ssb,ssc,ss;
    ssa << a;   ssa >> A;
    ssb << b;   ssb >> B;
    ssc << c;   ssc >> C;
    str = A+B+C;    arr[0]=str;    str="";
    str = A+C+B;    arr[1]=str;    str="";
    str = B+A+C;    arr[2]=str;    str="";
    str = B+C+A;    arr[3]=str;    str="";
    str = C+A+B;    arr[4]=str;    str="";
    str = C+B+A;    arr[5]=str;    str="";
    for (int i=0; i<6; i++) {
        string min = "999";
        int fc = -1;
        for (int j=0; j<6; j++) {
            if (arr[j] < min) {
                min = arr[j];
                fc = j;
            }
        }
        arr[fc] = "999";
        cout << min << endl;
    }
}
