#pragma once
template <typename T>
class Stack
{
private:
	T *stackPtr;
	int size;
	T top;
public:
	Stack(T s)
	{
		size = s > 0 ? s : 10;
		stackPtr = new T[size];
		top = -1;
	}
	
	~Stack()
	{
		delete[] stackPtr;
		size = 0;
		top = 0;
	}
	
	bool push(const T value) //input element in Stack
	{
		if (top == size - 1)
		{
			return false; //Stack is full
		}
		top++;
		stackPtr[top] = value; //pushing element
		return true;
	}
	 //get element -> delete element
	bool pop()
	{
		if (top == -1) //Stack is empty
		{
			return false;
		}
		stackPtr[top] = 0; //delete element form Stack
		top--;
		return true;
	}
	
	void printStack()
	{
		for (int i = size - 1; i >= 0; i--)
		{
			cout << "|" << setw(4) << stackPtr[i] << endl;
		}
	}
};

