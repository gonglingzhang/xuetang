/*
题目描述
这是一个关于外星人ET的番外故事~
ET回到家园之后，还一直思念着Elliott, 同样，Elliott也忘不了ET这个外星朋友。Michael为了解弟弟的“相思之苦（？？)”,为弟弟和ET设计了一个宇宙超能量传输装置，使他们隔着几千万光年也能对话。Elliott和ET都很开心，每天都能聊很久。Michael不禁好奇他们都说了些什么，偷偷地查看了他们的聊天记录，平时他们聊天的内容都记录在神秘的小本本上。但是小本本只记录了他们对话的内容，并没有标注出是谁说了这句话，Michael看的特别费劲。作为一个忙碌且懒惰的宅男，他想要你整理聊天记录到一个新的小本本中，让他能更好地“偷窥”弟弟和ET的小秘密。
输入格式
从文件 chat.in中读入以下内容
若干行，每行是一句ET或者Elliott说的话
输出格式
输出到文件 chat.out中
在读入的每行前标注上是谁说了这句话，格式为加上“ET: " 或者 "Elliott： ”注意有空格
每次对话都是由Elliott先发起的，之后都是ET和Elliott一人一句。
样例输入
Hello ET!
Hello Elliott!
How is it going today?
Pretty good.
样例输出
Elliott: Hello ET!
ET: Hello Elliott!
Elliott: How is it going today?
ET: Pretty good.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;
void output(string str, int n);
int main() {
    ifstream readout;
    string str;
    char buffer[102400];
    readout.open("chat.in");
    int n = 2;
    while (!readout.eof()) {
        readout.getline(buffer,102400,'\n');
        str = buffer;
        if (str.length() >= 1) {
            output(str,n);
            n++;
        }
    }
    readout.close();
    return 0;
}
void output(string str, int n) {
    ofstream writein;
    writein.open("chat.out",ios::app);
    if (n%2 == 0) {
        str = "Elliott: " + str + "\n";
        writein << str;
    } else {
        str = "ET: " + str + "\n";
        writein << str;
    }
    writein.close();
    return;
}
