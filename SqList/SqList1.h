#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//线性表的实现
typedef int DataType;
typedef struct SqList
{
	DataType* a;//指向开辟的空间
	int size;//大小
	int capacity;//容量大小
}SL;
void SeqListInit(SL*ps);//初始化
void SeqListCheck(SL* ps);//检查容量
void SeqListPushFront(SL* ps,DataType x);//头插
void SeqListPrint(SL* ps);//打印
void SeqListPushBack(SL* ps, DataType x);//尾插
void SeqListPopBack(SL* ps);//尾删
void SeqListPopFront(SL* ps);//头删
int SeqListFind(SL* ps, DataType x);//查找x的位置，返回下标，找不到返回-1
void SeqListErease(SL* ps, int pos);//删除下标pos位置的数据
void SeqListInsert(SL* ps, int pos, DataType x);//在下标pos位置之前插入x
void SeqListInsertBack(SL* ps, int pos, DataType x);//在下标pos位置之后插入x