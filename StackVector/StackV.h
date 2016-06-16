#pragma once
template <typename T>
class StackV
{
private:
	vector<T> m_data;
	T maxElement = 0;
public:
	StackV();
	~StackV()
	{
		maxElement = 0;
	};

	bool push()
	{		
		T value = GenerateInt();
		m_data.push_back(value);
		cout << "Add element: " << value << endl;
		CheckMAX(value);
		return true;
	}
	
	bool pop()
	{
		auto res = m_data.size() > 0;
		if(res)
		{
			if(CheckMAX(m_data.end()))
			{
				//if the last element is max???
				return false;
			}
			
			m_data.erase(m_data.end());
			return true;
		}
		return false;
	}



private:
	int GenerateInt()
	{
		random_device rand;
		default_random_engine engine(rand());
		uniform_int_distribution<int> uniform_int_distribution(0, 100);
		return uniform_int_distribution(engine);
	}

	bool CheckMAX(const T value)
	{
		if (m_data.size() == 0)
		{
			cout << "Stack is empty" << endl;
			return false;
		}
		else
		{
			if (maxElement <= value)
			{
				maxElement = value;
				cout << "maxElement: " << maxElement;
				return true;
			}
			cout << "maxElement: " << maxElement;
			return false;
		}
	}
};

