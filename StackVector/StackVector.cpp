// StackVector.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "StackV.h"


int main()
{
	StackV<int> m_stack_v;
	
	/*for(int i=0; i<10; i++)
	{
		m_stack_v.Add();
	}

	for (int i = 9; i<=0; i--)
	{
		m_stack_v.Take();
	}*/

	int element;
	for(int i=0; i<7; i++)
	{
		cout << "Enter element: "; cin >> element;
		m_stack_v.Add(element);
	}

	for(int i=0; i<7; i++)
	{
		m_stack_v.Take(*m_stack_v.m_max.rbegin());
	}



	system("pause");
    return 0;
}

