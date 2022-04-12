#pragma once
#include <iostream>

union MyVariant 
{
public:
	MyVariant();
	template <typename type>
	MyVariant(type value);
	~MyVariant();
	template <typename type>
	void set(type value);
	template <typename type>
	type& get(type value);
private:
	int i_value;
	bool b_value;
	float f_value;
	double d_value;
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
	i_value = value;
	b_value = value;
	f_value = value;
	d_value = value;
}
