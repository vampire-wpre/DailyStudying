#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//���Ա��ʵ��
typedef int DataType;
typedef struct SqList
{
	DataType* a;//ָ�򿪱ٵĿռ�
	int size;//��С
	int capacity;//������С
}SL;
void SeqListInit(SL*ps);//��ʼ��
void SeqListCheck(SL* ps);//�������
void SeqListPushFront(SL* ps,DataType x);//ͷ��
void SeqListPrint(SL* ps);//��ӡ
void SeqListPushBack(SL* ps, DataType x);//β��
void SeqListPopBack(SL* ps);//βɾ
void SeqListPopFront(SL* ps);//ͷɾ
int SeqListFind(SL* ps, DataType x);//����x��λ�ã������±꣬�Ҳ�������-1
void SeqListErease(SL* ps, int pos);//ɾ���±�posλ�õ�����
void SeqListInsert(SL* ps, int pos, DataType x);//���±�posλ��֮ǰ����x
void SeqListInsertBack(SL* ps, int pos, DataType x);//���±�posλ��֮�����x