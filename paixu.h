#pragma once
#ifndef PAIXU_H
#define PAIXU_H
#include<iostream>
using namespace std;
void InsertSort(int* arr, size_t len)//�����㷨����//
{
	assert(arr);
	for (size_t i = 1; i < len; ++i)
	{
		int iend_of_arr = i - 1;
		int tmp = arr[i];
		while (iend_of_arr >= 0)
		{
			if (arr[iend_of_arr] > tmp)//�Ƚ�����������һ�����Ĵ�С//
			{
				arr[iend_of_arr + 1] = arr[iend_of_arr];//�Ѵ�����ַŵ�����//
				--iend_of_arr;
			}
			else
				break;
		}
		arr[iend_of_arr + 1] = tmp;

	}

}
#endif // !PAIXU_H
