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
	i_value = 0;
	b_value = 0;
	f_value = 0;
	d_value = 0;
}

template<typename type>
inline MyVariant::MyVariant(type value)
{
	i_value = value;
	b_value = value;
	f_value = value;
	d_value = value;
}
