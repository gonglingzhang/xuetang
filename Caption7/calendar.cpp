/*
题目描述
输入两个日期（年 / 月 / 日），保证后一个日期在前一个日期之后，求它们之间的天数。
输入格式
输入为两行，每一行为一个日期，日期格式为（年/月/日）
输出格式 样例输入
2012/2/28
2012/3/1
样例输出
2
*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
bool Is_leap_year(int y);
int days_of_month(int month);
int get_days_of_year(int y1, int y2);
int get_days_of_month(int y1, int y2, int m1, int m2);
int get_days(int d1, int d2);
int main() {
    int dif_yd = -999, dif_md = -999, dif_dd = -999;
    int y1,y2,m1,m2,d1,d2;
    int dif_cnt = -999;
    string data1, data2;
    cin >> data1 >> data2;
    string str = "";
    stringstream ss;
    for (int i=0; i<4; i++) {
        str += data1[i];
    }
    ss << str;  ss >> y1;   str=""; ss.clear();
    if (data1[6] == '/') {
        str = data1[5];
        ss << str;  ss >> m1;   str=""; ss.clear();
        for (int i=7; i<data1.length(); i++) {
            str += data1[i];
        }
        ss << str;  ss >> d1;   str=""; ss.clear();
    } else {
        str += data1[5];
        str += data1[6];
        ss << str;  ss >> m1;   str=""; ss.clear();
        for (int i=8; i<data1.length(); i++) {
            str += data1[i];
        }
        ss << str;  ss >> d1;   str=""; ss.clear();
    }   
    for (int i=0; i<4; i++) {
        str += data2[i];
    }
    ss << str;  ss >> y2;   str=""; ss.clear();
    if (data2[6] == '/') {
        str = data2[5];
        ss << str;  ss >> m2;   str=""; ss.clear();
        for (int i=7; i<data2.length(); i++) {
            str += data2[i];
        }
        ss << str;  ss >> d2;   str=""; ss.clear();
    } else {
        str += data2[5];
        str += data2[6];
        ss << str;  ss >> m2;   str=""; ss.clear();
        for (int i=8; i<data2.length(); i++) {
            str += data2[i];
        }
        ss << str; ss >> d1;    str=""; ss.clear();
    }
    dif_yd = get_days_of_year(y1,y2);
    dif_md = get_days_of_month(y1,y2,m1,m2);
    dif_dd = d2-d1;
    dif_cnt = dif_yd + dif_md + dif_dd;
    cout << dif_cnt << endl;
    return 0;
}
bool Is_leap_year(int y) {
    if (y%400==0 || (y%4==0 && y%100!=0)) {
        return true;
    }
    else {
        return false;
    }
}
int get_days_of_year(int y1, int y2) {  //the dif of days between two years
    int years[100];
    int c=0;
    int count = 0;
    for (int i=y1; i<y2; i++) {
        years[c] = i;
        c++;
    }
    for (int i=0; i<c; i++) {
        if(Is_leap_year(years[i])) {
            count += 366;
        } else {
            count += 365;
        }
    }
    return count;
}
int days_of_month(int y1, int month) {
    int count1 = 0;
    switch(month) {
        case 1: count1 += 31; break;
        case 2:
            if (Is_leap_year(y1)) {
                count1 += 29; break;
            } else {
                count1 += 28; break;
            }
        case 3: count1 += 31; break;
        case 4: count1 += 30; break;
        case 5: count1 += 31; break;
        case 6: count1 += 30; break;
        case 7: count1 += 31; break;
        case 8: count1 += 31; break;
        case 9: count1 += 30; break;
        case 10: count1 += 31; break;
        case 11: count1 += 30; break;
        case 12: count1 += 31; break;
    }
    return count1;
}
int get_days_of_month(int y1, int y2, int m1, int m2) {     //the differ of daysbetween two months
    int count1 = 0, count2 = 0;
    int mon1[m1], mon2[m2];
    for (int i=1; i<m1; i++) {
        mon1[i-1] = i;
    }
    for (int i=1; i<m2; i++) {
        mon2[i-1] = i;
    }
    for (int i=0; i<m1-1; i++) {
        count1 += days_of_month(y1, mon1[i]); //存放首年已经过的天数(需要减去的)
    }
    for (int i=0; i<m2-1; i++) {
        count2 += days_of_month(y2, mon2[i]); //存放末年已经过的天数(需要加上的)
    }
    return count2 - count1;     //返回首尾两年已经过去的天数之差
}
int get_days(int d1, int d2) {      //the differ of days between two days
    return d2-d1;
}
