#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#define LINE 9         //չʾ������
#define LIST 9        //չʾ������
#define LINES LINE+2  //ʵ�ʵ�����
#define LISTS LIST+2  //ʵ�ʵ�����
#define EasyCount 10  //��ģʽ�׵ĸ���
//#define HardCount 40

void menue();//�˵�
void Init(char arr[LINES][LINES], int line, int list, char set);//��ʼ��
void Print(char arr[LINES][LINES], int line, int list);//��ӡ��ͼ
void SetMine(char arr[LINES][LISTS], int line, int list);//���������
void FindMine(char mine[LINES][LISTS], char map[LINES][LISTS], int line, int list);//�Ų���
int CountMine(char mine[LINES][LINES], int x, int y);//ͳ������x,y��Χ�׵ĸ���