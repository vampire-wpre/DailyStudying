#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//˫��ѭ����ͷ�����ʵ��
typedef int LTDataType;
typedef struct ListNode
{
	struct ListNode* prev;
	struct ListNode* next;
	LTDataType data;
}ListNode;
//--------------------------------------------------------------------------------------------------//
ListNode* ListInit();// ��ʼ������ͷ���
ListNode* BuyListNode(LTDataType x);// ��̬����һ�����
void Listprint(ListNode* phead);// ��ӡ
void ListPushBack(ListNode* phead, LTDataType x);// β��
void ListPopBack(ListNode* phead);// βɾ
void ListPushFront(ListNode* phead, LTDataType x);// ͷ��
void ListPopFront(ListNode* phead);// ͷɾ
ListNode* ListFind(ListNode* phead, LTDataType x);// ����
void ListInsert(ListNode* pos, LTDataType x);// ��posǰ����
void ListErase(ListNode* pos);// ɾ��posλ�õĽ��