#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int DataType;
typedef struct Stack
{
	DataType* a;
	int top;//ջ��
	int capacity;//�����Ĵ�С
}ST;
void StackInit(ST* ps);//��ʼ��
void StackDestroy(ST* ps);//����
void StackPush(ST* ps, DataType x);//��������
void StackPop(ST* ps);//ɾ������
DataType StackTop(ST* ps);//ȡջ��������
int StackSize(ST*);//����ջ���ж��ٸ�����
bool StackEmpty(ST* ps);//�ж�ջ�Ƿ�Ϊ��
//void StackPrint(ST* ps);//��ӡջ