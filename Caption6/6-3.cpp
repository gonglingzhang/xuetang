/*
题目描述
在数字串“3215125”中插入3个乘号，使总的乘积最大，不可以在头和尾放乘号，也不可在任两个相邻数间放多于一个乘号。
例如第一种插入乘号的方案：32*15*12*5 = 28800
第二种插入乘号的方案：3*215*12*5 = 38700
请输出最大的乘积。
输入格式
无
输出格式
输出最大的乘积
样例输入
样例输出
28800
*/
#include <iostream>  
#include <cstring>  
using namespace std;  
  
const int S = 3215125;  
  
int d[7][7];  
  
int P(int l, int r, int k)  
{  
    if(k == 0)  
        return d[l][r];  
    int x, answer = 0;  
    for(int q = l; q <= r - k; q++)  
    {  
        x = d[l][q] * P(q + 1, r, k - 1);  
        if(x > answer)  
            answer = x;  
    }  
    return answer;  
}  
int main()  
{  
    memset(d, 0, sizeof(d));  //数组d置零  
    int sl, i, j;  
    sl = 1000000;  
    d[0][6] = S;  
    for(i = 1; i <= 6; i++)  
    {  
        d[i][6] = d[i - 1][6] % sl;  
        sl = sl / 10;  
    }   
    for(j = 5; j >= 0; j--)  
        for(i = 0; i <= j; i++)  
        {  
            d[i][j] = d[i][j + 1] / 10;  
        }  
    cout << P(0, 6, 3) << endl;  
    return 0;  
}  
