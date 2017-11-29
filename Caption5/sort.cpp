/*
题目描述
以递归方法实现选择排序（从小到大），为便于检查，要求输出每一次操作后的数组元素的排列状况。
输入格式
两行输入，第一行表示数组元素个数，第二行表示数组元素，每个数之间以空格隔开
输出格式
每一行为一次操作后的输出
样例输入
5
3 1 5 4 2
样例输出
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
*/
#include <iostream>
void sort(int a[], int arr_len, int end_line);
using namespace std;
int main() {
    int *a = new int(10000);
    int input_count;
    cin >> input_count;
    for (int i=0; i<input_count; i++) {
        cin >> a[i];
    }
    sort(a,input_count,0);
    return 0;
}
void sort(int *a, int arr_len, int end_line) {
    if (end_line < arr_len) {
        int m = end_line, tmp;
        for (int i=end_line+1; i<arr_len; i++) {
            if (a[m] < a[i]) {
                tmp = a[m];
                a[m] = a[i];
                a[i] = tmp;
            }
        }
        for (int i=end_line; i>=0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
        sort(a,arr_len,end_line+1);
    }
}
