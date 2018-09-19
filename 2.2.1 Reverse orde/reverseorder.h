#pragma once
template<class T>
class ReverseOrder
{
public:
	ReverseOrder();
	~ReverseOrder();
	void reverse(linear_Table<T>);
private:
	void swapele(linear_Table<T> , T ele_1, T ele_2);
};

template<class T>
inline ReverseOrder<T>::ReverseOrder()
{
	std::cout << " asda" << std::endl;
}

template<class T>
inline ReverseOrder<T>::~ReverseOrder()
{
	std::cout << "go" << std::endl;
}

template<class T>
inline void ReverseOrder<T>::reverse(linear_Table<T> LinTa)
{
	T left_ele = 1, right_ele = LinTa.ListLenght();
	if (LinTa.ListLenght()==0)
	{
		throw "No Elem In List!";
	}
	for (int i = 0; i < LinTa.ListLenght()/2; i++)
	{
		
	}
	
}

template<class T>
inline void ReverseOrder<T>::swapele(linear_Table<T> LinTa, T location_1, T location_2)
{
	T location_temp;


}
