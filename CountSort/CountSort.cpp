// ShellSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<conio.h>
void count_Sort(int a[], int n)
{
	int c[10] = { 0 };//原来数组的数值不超过10
	int i,j,k;
	for (i = 0; i < n; i++)
		c[a[i]]++;
	k = 0;
	for (i = 0; i < 10; i++)//这里是遍历c数组
		for (j = 1; j <= c[i]; j++)//根据c【i】的值来决定要赋值几次
			a[k++] = i;
}
void output(int a[], int n)
{
	int i;
	for (i =0; i < n; i++)
		printf("%d ", a[i]);
}
int main()
{
	int a[8] = { 1,4,2,5,3,2,4,6 };
	count_Sort(a, 8);
	output(a, 8);
	//system("PAUSE");
	return 0;
}

