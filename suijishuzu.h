#pragma once
#ifndef SUIJISHUZU_H
#define SUIJISHUZU_H

#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
void Rand_Arr(int arr[], int lenof_Arr)
{
	srand((unsigned)time(NULL));//�涨�������ϵͳʱ�����//
	for (int i = 0; i < lenof_Arr; ++i)
	{
		arr[i] = rand() % 100;
	}
}
#endif