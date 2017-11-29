/*
题目描述
从命令行读入若干指令，执行相应计算。
指令     格式        意义
  SET     SET x      设置运算结果为x
  ADD     ADD x      运算结果+x
  SUB     SUB x      运算结果-x
  MUL     MUL x      运算结果*x
  DIV     DIV x      运算结果/x
  OUT     OUT        输出运算结果并换行，结果保留2位小数
上述指令的参数x都为浮点数，且保证不会除以0。
输入格式
第一行为测试样例个数n，后面接n行测试数据，每一行包含若干指令，指令间空格隔开
输出格式
输出结果并换行，保留两位小数
样例输入
2
SET 2.5 MUL 2 SUB 1 OUT
SET 3 DIV 3 OUT
样例输出
4.00
1.00
*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float  order();
int main() {
        int count = -999;
        cin >> count;
        float res[999];
        for (int i=0; i< count; i++) {
            res[i] = order();
        }
        for (int i=0; i<count; i++) {
            cout << fixed << setprecision(2) << res[i] << endl;
        }
        return 0;
}
float order() {
    float init_value = -9999;
    float temp = -9999;
    string input;
    do {
            cin >> input;
            if (input == "SET") {
                cin >> init_value;
            } else if (input == "ADD") {
                cin >> temp;
                init_value += temp;
            } else if (input == "SUB") {
                cin >> temp;
                init_value -= temp;
            } else if (input == "MUL") {
                cin >> temp;
                init_value *= temp;
            } else if (input == "DIV") {
                cin >> temp;
                init_value /= temp;
            }
    } while (input != "OUT");
    return init_value;
}
