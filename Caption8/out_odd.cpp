/*
题目描述
代码补全 ——已经给定一个链表，链表的每个节点只含有一个int型元素和Node*指针，该链表共有十个节点， 输出链表元素值为奇数的项。部分代码已经写好，请同学们补全output函数即可。
输入格式
输入函数和主函数已经给定，无需同学操作
输出格式
输出奇数值，以空格隔开
样例输入
1 3 4 5 6 7 8 10 11 15
样例输出
1 3 5 7 11 15
*/
#include<iostream>
using namespace std;

struct Node{
	int value;
	Node* next;
	Node(){}
	Node(int x) : value(x), next(NULL) {}
};
void init(Node* head){		//链表初始化
	int val;
	cin>>val;
	head->value=val;
	Node* tmpNode = head;
	for (int i=0;i<9;i++){	//链表共有十个节点,head后还有9个
		cin>>val;
		Node* pNode = new Node(val);
		tmpNode->next=pNode;
		tmpNode=pNode;
	}
	tmpNode->next=NULL;
}
void output(Node* head);		//函数原型声明
int main(){
	Node head;
	init(&head);
	output(&head);
	return 0;
}
void output(Node* head){
    Node* tmpNode = head;
    for (int i=0; i<=9; i++) {
        if (tmpNode->value%2 != 0) {
            cout << tmpNode->value << " ";
        }
        tmpNode = tmpNode->next;
    }
}

