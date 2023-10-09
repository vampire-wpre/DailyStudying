#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<assert.h>
typedef int DataType;
typedef struct Stack
{
	DataType* a;
	int top;//栈顶
	int capacity;//容量的大小
}ST;
void StackInit(ST* ps);//初始化
void StackDestroy(ST* ps);//销毁
void StackPush(ST* ps, DataType x);//插入数据
void StackPop(ST* ps);//删除数据
DataType StackTop(ST* ps);//取栈顶的数据
int StackSize(ST*);//计算栈内有多少个数据
bool StackEmpty(ST* ps);//判断栈是否为空
//void StackPrint(ST* ps);//打印栈