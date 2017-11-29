/*
题目描述
给定一个数组，判断其中的数据序列是否左右对称：偶数个数时，左右两半部分正好逆序；奇数时，除中间位置数外，左右逆序
输入格式
第一行N表示一共有N个测试用例，也即接下来的输入数据共有N行。
接下来的每一行表示一个输入数组，第一个数字n表示该数组的元素个数，后面紧跟着n个数，中间都以空格隔开
输出格式
是逆序输出YES,否则输出NO（注意都是大写，小写判错）
样例输入
3
5 1 2 3 2 1
4 1 1 1 2
6 2 1 2 2 1 2
样例输出
YES
NO
YES
*/
#include <iostream>
using namespace std;
string is_symmetry(int *a, int cnt);
int main() {
    int count = -999;
    int arr_len = -999;
    string res[1000];
    cin >> count;
    for (int i=0; i<count; i++) {
        int *a = new int(10000);
        cin >> arr_len;
        for (int c=0; c<arr_len; c++) {
            cin >> a[c];
        }
        res[i] = is_symmetry(a,arr_len);
    }
    for (int i=0; i<count; i++) {
        cout << res[i] << endl;
    }
    return 0;
}
string is_symmetry(int *a, int cnt) {
    if (cnt%2 == 0) {
        for (int i=cnt/2; i>0; i--) {
//            cout << a[i-1] << " " << a[cnt-i] << endl;
            if (a[i-1] != a[cnt-i]) {
                return "NO";
            }
        }
    } else {
        for (int i=(cnt+1)/2; i>1; i--) {
//            cout << a[i-2] << " " << a[cnt-i+1] << endl;
            if (a[i-2] != a[cnt-i+1]) {
                return "NO";
            }
        }
    }
   return "YES";
}
