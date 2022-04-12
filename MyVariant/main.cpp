// MyVariant.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "MyVariant.h"

int main()
{
    MyVariant value(10);
    std::cout << value.get<int>();
}
