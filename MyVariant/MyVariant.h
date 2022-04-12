#pragma once
#include <iostream>

union MyVariant 
{
public:
	MyVariant();
	~MyVariant();
	template <typename type>
	void set(type value);
private:
	int i_value;
	bool b_value;
	float f_value;
	double d_value;
};