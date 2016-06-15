#pragma once
class MyStack
{
private:
	vector<int> m_data;
public:
	MyStack();
	~MyStack();

	void Add(int a);
	bool Take(int &a);
};

