#include "stdafx.h"
#include "MyStack.h"




MyStack::MyStack()
{
}


MyStack::~MyStack()
{
}


void MyStack::Add(int a)
{
	m_data.push_back(a);
}

bool MyStack::Take(int& a)
{
	auto res = m_data.size() > 0;
	if(res)
	{
		a = *m_data.rbegin();
		m_data.erase(m_data.end() - 1);
	}
	return res;
}

