/*//===========================

    �����ܣ������㷨
    ��    ��������Խ
    ѧ    �ţ�319031112
    ѧ    Ժ������ѧ��

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

    cout << "����ǰ��" << endl;

    Print_Arr(Arr, iLenof_Arr);

    cout << endl;

    InsertSort(Arr, iLenof_Arr);

    cout << "�����" << endl;

    Print_Arr(Arr, iLenof_Arr);

    cout << endl;
	system("pause");
	
    return 0;
	

    


}

