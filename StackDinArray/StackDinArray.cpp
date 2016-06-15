// StackDinArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Stack.h" 

int GenerateInt();


int main()
{
	//Stack<int> n_stack(4);
	int sizeStack;
	cout << "Enter size Stack (default value - 10): ";
	cin >> sizeStack;

	Stack<int> m_stack(sizeStack);
	cout << "pushing elements in Stack..." << endl;
	for(int i=0; i<sizeStack; i++)
	{
		m_stack.push(GenerateInt());
	}
	
	m_stack.printStack();

	int cntElem;
	cout << "How many elements do you want to delete? Please answer: ";
	cin >> cntElem;

	for(int i=0; i<cntElem; i++)
	{
		m_stack.pop();
	}

	m_stack.printStack();
	
	system("pause");
    return 0;
}


int GenerateInt()
{
	random_device rand;
	default_random_engine engine(rand());
	uniform_int_distribution<int> uniform_int_distribution(0, 9);
	return uniform_int_distribution(engine);
}
