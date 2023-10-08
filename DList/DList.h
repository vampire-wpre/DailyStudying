#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//双向循环带头链表的实现
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;
//--------------------------------------------------------------------------------------------------//
ListNode* ListInit();// 初始化创建头结点
ListNode* BuyListNode(LTDataType x);// 动态申请一个结点
void Listprint(ListNode* phead);// 打印
void ListPushBack(ListNode* phead, LTDataType x);// 尾插
void ListPopBack(ListNode* phead);// 尾删
void ListPushFront(ListNode* phead, LTDataType x);// 头插
void ListPopFront(ListNode* phead);// 头删
ListNode* ListFind(ListNode* phead, LTDataType x);// 查找
void ListInsert(ListNode* pos, LTDataType x);// 在pos前插入
void ListErase(ListNode* pos);// 删除pos位置的结点