// MyVariant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "MyVariant.h"

int main()
{
    MyVariant value(10);
	value.set<float>(12);
	std::cout << value.getType() << " value is " << value.get<float>() << std::endl;
	return 0;
}
