/*
数值填空题  (2 满分)
下载链接中的图片文件，以二进制方式打开并读取该文件中的第 10（从0开始计数，后同）, 23, 80 个字节处的值，求这3个二进制数按位异或的结果（10进制表示）。
*/
#include <iostream>
#include <fstream>
#include <assert.h>
#include <string>
using namespace std;
int main() {
    ifstream readout;
    int ch[103];
    readout.open("scene.jpg",ios::binary);
    readout.read((char*)&(ch),100);
    cout << ch << endl;
    readout.close();
    return 0;
}
