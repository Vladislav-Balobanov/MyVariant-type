#pragma once
#include <iostream>
#include <array>

class MyVariant 
{
public:
	MyVariant();
	template <typename type>
	MyVariant(type value);
	template <typename type>
	void set(type value);
	template <typename type>
	type get();
private:
	union
	{
		int i_value;
		bool b_value;
		float f_value;
		double d_value;
	};
};


MyVariant::MyVariant()
{
	set(0);
}

template<typename type>
inline MyVariant::MyVariant(type value)
{
	set(value);
}

template<typename type>
inline void MyVariant::set(type value)
{
	if (typeid(type) == typeid(int))
	{
		i_value = value;
	}
	else if (typeid(type) == typeid(bool))
	{
		b_value = value;
	}
	else if (typeid(type) == typeid(float))
	{
		f_value = value;
	}
	else if (typeid(type) == typeid(double))
	{
		d_value = value;
	}
}

template<typename type>
inline type MyVariant::get()
{
	if (typeid(type) == typeid(int))
		return i_value;
	else if (typeid(type) == typeid(bool))
		return b_value;
	else if (typeid(type) == typeid(float))
		return f_value;
	else if (typeid(type) == typeid(double))
		return d_value;
}
