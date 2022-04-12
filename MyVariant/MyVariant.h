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