#pragma once
#include <iostream>

template<typename T1, typename T2, typename T3, typename T4>
class MyVariant
{
public:
	MyVariant();
	template<typename T1>
	MyVariant();
	template<typename T1, typename T2>
	MyVariant();
	template<typename T1, typename T2, typename T3>
	MyVariant();
	template<typename T1, typename T2, typename T3, typename T4>
	MyVariant();
	~MyVariant();
};

