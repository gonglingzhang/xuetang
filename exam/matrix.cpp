/*
题目描述
给定一个nxn（n<10)的方阵，请输出左上角开始逆时针从大到小填充方阵的结果。
输入格式
输入方阵的大小n
输出格式
方阵填充结果,每个数字均占两位并右对齐，以一个空格隔开
样例输入
4
样例输出
16  5  6  7
15  4  1  8
14  3  2  9
13 12 11 10

9 2 3
8 1 4
7 6 5

4 1
3 2
*/
#include<iostream>  
#include<iomanip>  
using namespace std;  
const int N=10;  
void FillMatrix(int matrix[N][N],int size,int num,int offset)  
{  
    //matrix为总矩阵，size为剩余矩阵的大小，num为要填的第一个数，offset为剩余矩阵在总矩阵中的位置  
    //递归终止条件  
    if(size==0)  
        return;  
    //递归终止条件  
    if(size==1)  
    {  
        matrix[offset][offset]=num;  
        return;  
    }  
    //先填充外围  
    int i;  
    for(i=0;i<size-1;i++)  
    {  
        matrix[offset+i][offset]=num-i;  
        matrix[offset+size-1][offset+i]=num-(size-1)-i;  
        matrix[offset+size-1-i][offset+size-1]=num-2*(size-1)-i;  
        matrix[offset][offset+size-1-i]=num-3*(size-1)-i;  
    }  
    //再递归填充内核(小了一圈的子矩阵)  
    FillMatrix(matrix,size-2,num-4*(size-1),offset+1);  
}  
  
int main()  
{  
   int Matrix[N][N];  
   int n;  
   cin>>n;  
   FillMatrix(Matrix,n,n*n,0);  
   int i,j;  
   for(i=0;i<n;i++)  
   {  
       for(j=0;j<n;j++)  
       {  
           cout<<setw(2)<<Matrix[i][j]<<" ";  
       }  
       cout<<endl;  
   }  
    return 0;  
}  
