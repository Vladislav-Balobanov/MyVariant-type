// MyVariant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "MyVariant.h"

int main()
{
    MyVariant value(10);
	value.set<int>(12);
	std::cout << w_type::what_type << " value is " << value.get<int>() << std::endl;
	value.set<float>(3.14);
    std::cout << w_type::what_type << " value is " << value.get<float>() << std::endl;
	return 0;
}
