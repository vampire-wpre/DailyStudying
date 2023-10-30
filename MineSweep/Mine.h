#define  _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<Windows.h>
#define LINE 9         //展示的行数
#define LIST 9        //展示的行数
#define LINES LINE+2  //实际的行数
#define LISTS LIST+2  //实际的列数
#define EasyCount 10  //简单模式雷的个数
//#define HardCount 40

void menue();//菜单
void Init(char arr[LINES][LINES], int line, int list, char set);//初始化
void Print(char arr[LINES][LINES], int line, int list);//打印地图
void SetMine(char arr[LINES][LISTS], int line, int list);//随机设置雷
void FindMine(char mine[LINES][LISTS], char map[LINES][LISTS], int line, int list);//排查雷
int CountMine(char mine[LINES][LINES], int x, int y);//统计坐标x,y周围雷的个数