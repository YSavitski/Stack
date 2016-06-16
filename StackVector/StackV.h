#pragma once
template <typename T>
class StackV
{
private:
	vector<T> m_data;
	
	T maxElement = 0;
public:
	vector<T> m_max;
	StackV()
	{
		
	};
	~StackV()
	{
		//maxElement = 0;
	};

	bool Add(const T &value)
	{		
		//value = GenerateInt();
		
		m_data.push_back(value);
		//cout << "Add element: " << value << endl;
		CheckMAX(value);
		return true;
	}
	
	bool Take(T &value)
	{
		auto res = m_data.size() > 0;
		if(res)
		{
			m_data.erase(m_data.end() - 1);
			value = *m_max.rbegin();			
			cout << "Max: " << value << endl;
			m_max.erase(m_max.end() - 1);
			return true;
		}
		return false;
	}

	int GenerateInt()
	{
		random_device rand;
		default_random_engine engine(rand());
		uniform_int_distribution<int> uniform_int_distribution(0, 100);
		return uniform_int_distribution(engine);
	}



private:
	

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
				//cout << "maxElement: " << maxElement<<endl;
				m_max.push_back(maxElement);
				return true;
			}
			//cout << "maxElement: " << maxElement<<endl;
			m_max.push_back(maxElement);
			return false;
		}
	}
};

