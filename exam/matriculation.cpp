/*
题目描述
正值高考录取阶段，现在有一份考生志愿填报文件，文件名为datain.txt，文件中一共有三所候选大学，A，B和C，文件第一行分别为三所大学的录取人数上限，以空格隔开。
后面若干行（小于十万条）为具体的考生报考信息，具体格式为：考号 成绩 平行志愿1 平行志愿2。按照成绩从高到低的顺序排列（没有重分，满分750分）以下内容为datain.txt文件示例（仅仅是示例，考号和成绩均不具有参照性）：
1 1 1
2015001 600 A B
2015002 580 A C
2015003 555 C B
2015004 500 A B
然后要求将A B C 三所大学的录取人数以及录取的最低分数写入一个文件名为dataout.txt的文件，内容为A大学最终录取人数，然后空格，然后录取的最低分数，然后空格，然后B大学录取人数，空格，录取最低分数，空格，C大学录取人数，空格，分数。
以上述题干为例，那么2015001可以被A大学顺利录取，2015002就无法进入A大学，只能被C大学录取，同理，2015003只能被B大学录取，2015004将无学可上。。所以写入dataout.txt文件的内容应该如下：
1 600 1 555 1 580
输入格式
无
输出格式
无
*/
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;
static int min_A = 0;
static int min_B = 0;
static int min_C = 0;
int get_min_score(string str) {
    int c=0;
    int space[5];
    string s="";
    stringstream ss;
    int min;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            space[c] = i;
            c++;
        }
    }
    for (int i=space[0]+1; i<space[1]; i++) {
            s += str[i];        
    }
    ss << s;
    ss >> min;
    ss.clear();
    return min;
}
char get_first_college(string str) {
    int c=0;
    int space[5];
    char fcollege;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            space[c] = i;
            c++;
        }
    }
    fcollege = str[space[1]+1];
    return fcollege;
}
char get_second_college(string str) {
    int c=0;
    int space[5];
    char scollege;
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            space[c] = i;
            c++;
        }
    }
    scollege = str[space[2]+1];
    return scollege;
}
void fuction() {
    int A=-999, B=-999,  C=-999;
    int a=1,b=1,c=1;
    char f,s;
    ifstream readout;
    string str="";
    char buffer[1024];
    readout.open("datain.txt",ios::in);
    readout.getline(buffer,1024,'\n');
    str = buffer;
    int fs1 = str.find(" ");
    int fs2 = str.find(" ",fs1+1);
    string st="";
    stringstream ss;
    for (int i=0; i<fs1; i++) {
        st += str[i];
    }
    ss << st;    ss >> A;    st = "";    ss.clear();
    for (int i=fs1+1; i<fs2; i++) {
        st += str[i];
    }
    ss << st;    ss >> B;    st = "";    ss.clear();
    for (int i=fs2+1; i<str.length(); i++) {
        st += str[i];
    }
    ss << st;    ss >> C;    st = "";    ss.clear();
    while (!readout.eof()) {
        readout.getline(buffer,1024,'\n');
        str = "";
        str = buffer;
        if (str.length() > 1) {
            f = get_first_college(str); 
            s = get_second_college(str);
            if (f == 'A') {
                if (a <= A) {
                    if (a==1) {
                        min_A = get_min_score(str);
                    }
                    if (min_A > get_min_score(str)) {
                        min_A = get_min_score(str);
                    }
                    a++;
                } else if (s == 'B' && b <= B) {
                    if (b==1) {
                        min_B = get_min_score(str);
                    }
                    if (min_B > get_min_score(str)) {
                        min_B = get_min_score(str);
                    }
                    b++;
                } else if (s == 'C' && c <= C) {
                    if (c==1) {
                        min_C = get_min_score(str);
                    }
                    if (min_C > get_min_score(str)) {
                        min_C = get_min_score(str);
                    }
                    c++;
                }
            } else if (f == 'B') {
                if (b==1) {
                    min_B = get_min_score(str);
                }
                if (b <= B) {
                    if (min_B > get_min_score(str)) {
                        min_B = get_min_score(str);
                    }
                    b++;
                } else if (s == 'A' && a <= A) {
                    if (a==1) {
                        min_C = get_min_score(str);
                    }
                    if (min_A > get_min_score(str)) {
                        min_A = get_min_score(str);
                    }
                    a++;
                } else if (s == 'C' && c <= C) {
                    if (c==1) {
                        min_C = get_min_score(str);
                    }
                    if (min_C > get_min_score(str)) {
                        min_C = get_min_score(str);
                    }
                    c++;
                }
            
            } else if (f == 'C') {
                if (c==1) {
                    min_C = get_min_score(str);
                }
                if (c <= C) {
                    if (min_C > get_min_score(str)) {
                        min_C = get_min_score(str);
                    }
                    c++;
                } else if (s == 'A' && a <= A) {
                    if (a==1) {
                        min_A = get_min_score(str);
                    }
                    if (min_A > get_min_score(str)) {
                        min_A = get_min_score(str);
                    }
                    a++;
                } else if (s == 'B' && b <= B) {
                    if (b==1) {
                        min_B = get_min_score(str);
                    }
                    if (min_B > get_min_score(str)) {
                        min_B = get_min_score(str);
                    }
                    b++;
                }
            }
        } //if (str.length() > 3) 
    } //while (!readout.eof()) 
    readout.close();
    ofstream writein;
    writein.open("dataout.txt");
    writein << A << " " << min_A << " " << B << " " << min_B << " " << C << " " << min_C;
    writein.close();
}   //fuction
int main() {
    fuction();
    return 0;
}
