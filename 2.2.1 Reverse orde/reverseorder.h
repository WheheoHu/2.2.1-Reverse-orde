#pragma once
template<class T>
class ReverseOrder
{
public:
	ReverseOrder(linear_Table<T>);
	~ReverseOrder();
	void reverse(linear_Table<T>);
private:
	void swapele(linear_Table<T> , int ,int);
	linear_Table<T> LinTa;
};

template<class T>
inline ReverseOrder<T>::ReverseOrder(linear_Table<T> LinTa)
{
	reverse(LinTa);
}

template<class T>
inline ReverseOrder<T>::~ReverseOrder()
{
	LinTa.ClearList();
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
	//std:: cout << LinTa.GetElem(i + 1) <<std:: endl;
		swapele(LinTa, left_ele, right_ele);
		left_ele++;
		right_ele--;
	}
	
}

template<class T>
inline void ReverseOrder<T>::swapele(linear_Table<T> LinTa, int location_1, int location_2)
{
	T ele_1 = LinTa.GetElem(location_1);
	T ele_2 = LinTa.GetElem(location_2);
	LinTa.ListDelete(location_1, ele_1);
	LinTa.ListInsert(location_1, ele_2);
	LinTa.ListDelete(location_2, ele_2);
	LinTa.ListInsert(location_2, ele_1);

}
