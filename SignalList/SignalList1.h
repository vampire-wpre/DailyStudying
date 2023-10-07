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

SL* BuyNewnode(DataType x);//�����µĽ��
void SListPrint(SL** phead);//��ӡ
void SListPopBack(SL** phead);//βɾ
void SListPushBack(SL** phead, DataType x);//β��
void SListPopFront(SL** phead);//ͷɾ
void SListPushFront(SL** phead, DataType x);//ͷ��
SL* SListFind(SL** phead, DataType x);//����Ԫ��x�����ҷ������Ľ�㣬�Ҳ�������NULL
void SListErease(SL** phead, SL* pos);//ɾ��pos���
void SListInsertBefore(SL** phead, SL* pos, DataType x);//��pos֮ǰ����x
void SListInsertAfter(SL** phead, SL* pos, DataType x);//��pos֮�����x