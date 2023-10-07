#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
typedef int DataType;
typedef struct SignalList
{
	struct SignalList* next;
	DataType data;
}SL;

SL* BuyNewnode(DataType x);//申请新的结点
void SListPrint(SL** phead);//打印
void SListPopBack(SL** phead);//尾删
void SListPushBack(SL** phead, DataType x);//尾插
void SListPopFront(SL** phead);//头删
void SListPushFront(SL** phead, DataType x);//头插
SL* SListFind(SL** phead, DataType x);//查找元素x，并且返回它的结点，找不到返回NULL
void SListErease(SL** phead, SL* pos);//删除pos结点
void SListInsertBefore(SL** phead, SL* pos, DataType x);//在pos之前插入x
void SListInsertAfter(SL** phead, SL* pos, DataType x);//在pos之后插入x