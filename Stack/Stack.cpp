// Stack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyStack.h"


int main()
{
	MyStack ms;
	int size = 10;
	for(int i=0; i<size; i++)
	{
		ms.Add(i);
	}

	int newNum;
	
	while(ms.Take(newNum))
	{
		cout << "i" << size << ": " << newNum << endl;
		size--;
	}

	system("pause");

    return 0;
}

