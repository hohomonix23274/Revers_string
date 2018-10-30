// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {

	char str[32];
	cin >> str;

	size_t i(0);
	size_t j(strlen(str) - 1);
	char tmp(0);
	//Разворот строки встречными обменами, количество обменов равно: strlen/2
	while (j > i) {

		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;

		i++;
		j--;
	}
	cout << str << endl;

	system("pause");
	return 0;
}



