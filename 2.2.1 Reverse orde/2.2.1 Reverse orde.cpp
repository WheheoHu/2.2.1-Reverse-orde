// 2.2.1 Reverse orde.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{	
	//initalize linetable named LinTa
	linear_Table<int> LinTa;
	LinTa.InitList();
	for (int i = 0; i < 90; i++)
	{
		LinTa.ListInsert(i + 1, i + 1);
	}
	ReverseOrder<int> ReOr(LinTa);
	for (int i = 0; i < LinTa.ListLenght(); i++)
	{
		std::cout << LinTa.GetElem(i + 1) << std::endl;
	}
	LinTa.ClearList();
	system("pause");
	return 0;
}

