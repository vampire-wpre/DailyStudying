#define  _CRT_SECURE_NO_WARNINGS 1
//Print()//������д����ֵ��Ĭ�Ϸ���int����
//{
//	printf("***********\n");
//}
//int main()
//{
//	int n = 0;
//	int ret = Print();
//	printf("%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	void set_arr(int arr1[5], int sz1);
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	return 0;
//}
////������ʹ��֮ǰ����������
//void set_arr(int arr1[5], int sz1)
//{
//	for (int i = 0; i < sz1; i++)
//	{
//		arr1[i] = -1;
//	}
//}


//��C�����У��������β�һ�㶼��ͨ������ѹջ�ķ�ʽ���ݵ�


//9��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//#include<stdio.h>
//void Print_(n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print_(n);
//	return 0;
//}


//10��ʵ�ֺ����ж�year�ǲ�������
//
//#include<stdio.h>
//int is_leapyear(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leapyear(year);
//	if (ret == 1)//�����귵��1
//	{
//		printf("%d��������\n",year);
//	}
//	else
//	{
//		printf("%d�겻������\n",year);
//	}
//	return 0;
//}




//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
//#include<stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	int flag = 1;//����������
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i < 200; i++)
//	{
//		if (is_prime(i))//is_prime����ֵ��1��ʾ������
//		{
//			printf("%d ", i);
//		}
//	}
//	printf("\n");
//	return 0;
//}



//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ
#include<stdio.h>
void init(int* ps, int sz)//��ʼ������Ϊȫ0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*ps = 0;
		ps++;
	}
}

void print(int arr[], int sz)//��ӡ����ÿ��Ԫ��
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

void reverse(int arr[], int sz)//��������
{

	int left = 0;//���±�
	int right = sz - 1;//���±�
	while (right >= left)
	{
		//����
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}





int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//����arr����һ��ʼ�����������ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);

	//init(arr,sz);//��ʼ������Ϊȫ0
	//printf("��ʼ���������Ϊ:\n");
	//print(arr,sz);//��ӡ����ÿ��Ԫ��
	//printf("\n");
	//reverse(arr, sz);
	//printf("���ú������Ϊ:\n");
	//print(arr, sz);
	printf("����ǰ������Ϊ:\n");
	print(arr, sz);
	printf("\n");
	reverse(arr, sz);
	printf("���ú�����Ϊ:\n");
	print(arr, sz);
	printf("\n");
	return 0;
}