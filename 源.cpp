/*//===========================

    程序功能：排序算法
    姓    名：吴子越
    学    号：319031112
    学    院：运载学部

===============================*/
#include<iostream>
#include<assert.h>
#include<cstdlib>
#include<ctime>
#include"paixu.h"
#include"shuchu.h"
#include"suijishuzu.h"
using namespace std;



int main()
{
    int Arr[10];
    int iLenof_Arr = sizeof(Arr) / sizeof(Arr[0]);    
	Rand_Arr(Arr, iLenof_Arr);

    cout << "排序前：" << endl;

    Print_Arr(Arr, iLenof_Arr);

    cout << endl;

    InsertSort(Arr, iLenof_Arr);

    cout << "排序后：" << endl;

    Print_Arr(Arr, iLenof_Arr);

    cout << endl;
	system("pause");
	
    return 0;
	

    


}

