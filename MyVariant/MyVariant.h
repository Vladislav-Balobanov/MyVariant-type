#pragma once
template <class ...Args>
class MyVariant
{
public:
	MyVariant();
	~MyVariant();
private:
	Args* value;
};

