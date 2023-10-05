#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Node
//{
//	int data;//存数据 - 4
//	struct Node next;
//
//};
//自己的对象里面不能放自己！
//但是包含自己这种指针类型的结构体指针变量是可行的
struct Node
{
	int data;//存数据 - 4
	struct Node* next;//下一个节点的地址

};

int main()
{
	struct Node n;
	return 0;
}