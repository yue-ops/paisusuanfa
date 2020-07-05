#pragma once
#ifndef SHUCHU_H
#define SHUCHU_H

#include<iostream>
using namespace std;
void Print_Arr(int arr[], int lenof_arr)//输出数组的函数//
{
	assert(arr);
	int i = 0;
	for (int i = 0; i < lenof_arr; ++i)
	{
		cout << arr[i] << " ";
	}
}
#endif // !SHUCHU_H
