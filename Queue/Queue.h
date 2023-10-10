#pragma once
//队列，队头出数据，队尾入数据
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int DataType;
typedef struct QueueNode//链式结构
{
	struct QueueNode* next;
	DataType data;
}QueueNode;
typedef struct Queue//有两个指针（多个值，用结构体）
{
	QueueNode* head;
	QueueNode* tail;
}Queue;
void QueueInit(Queue* pq);//初始化
void QueueDestroy(Queue* pq);//销毁
void QueuePush(Queue* pq, DataType x);//入队(存储数据)
void QueuePop(Queue* pq);//出队(删除数据)
DataType QueueFront(Queue* pq);//取队头的数据
DataType QueueBack(Queue* pq);//取队尾的数据
int QueueSize(Queue* pq);//计算队列里含有多少个数据
bool QueueEmpty(Queue* pq);//判断队列是否为空