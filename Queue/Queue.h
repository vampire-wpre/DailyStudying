#pragma once
//���У���ͷ�����ݣ���β������
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct QueueNode//��ʽ�ṹ
{
	struct QueueNode* next;
	DataType data;
}QueueNode;
typedef struct Queue//������ָ�루���ֵ���ýṹ�壩
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
void QueueInit(Queue* pq);//��ʼ��
void QueueDestroy(Queue* pq);//����
void QueuePush(Queue* pq, DataType x);//���(�洢����)
void QueuePop(Queue* pq);//����(ɾ������)
DataType QueueFront(Queue* pq);//ȡ��ͷ������
DataType QueueBack(Queue* pq);//ȡ��β������
int QueueSize(Queue* pq);//��������ﺬ�ж��ٸ�����
bool QueueEmpty(Queue* pq);//�ж϶����Ƿ�Ϊ��