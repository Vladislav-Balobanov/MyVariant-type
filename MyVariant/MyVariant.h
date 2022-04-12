#pragma once
#include <iostream>

union MyVariant 
{
private:
	int i_value;
	bool b_value;
	float f_value;
	double d_value;
};