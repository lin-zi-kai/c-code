//#include <stdio.h>
//
//void init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
//void reverse(int arr[], int sz)
//{
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right) 
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	print(arr,sz);
//	printf("\n");
//	reverse(arr,sz);
//	print(arr, sz);
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define sz 7

void swap(int arr1[sz],int arr2[sz])
{
	int i = 0;
	int tmp = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}

void print(int arr[sz])
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void init()
{
	int i = 0;
	int arr1[sz] = { 0 };
	int arr2[sz] = { 0 };
	printf("数组大小为：%d\n",sz);
	printf("输入数组1的元素：");
	for (i = 0; i < sz; i++)
		scanf("%d", &arr1[i]);
	printf("输入数组2的元素：");
	for (i = 0; i < sz; i++)
		scanf("%d", &arr2[i]);
	swap(arr1, arr2, sz); //交换数组
	print(arr1);   //打印交换后的数组1
	print(arr2);  //打印交换后的数组2
}

int main()
{
	init();//初始化数组
	return 0;
}