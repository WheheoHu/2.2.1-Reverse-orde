// 2.2.1 Reverse orde.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

int main()
{	
	//initalize linetable named LinTa
	linear_Table<int> LinTa;
	LinTa.InitList();
	for (int i = 0; i < 30; i++)
	{
		LinTa.ListInsert(i + 1, i + 1);
	}
	RrverseOrder<int> ReOr;


	LinTa.ClearList();
	return 0;
}

