// LatestDiginofHugeNumber.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// Ссылка на задание: https://www.codewars.com/kata/5518a860a73e708c0a000027
//
// Программа на входе, получает вектор целочисленных значений, выводит степень первого числа в виде : x1^(x2^(xn...


#include "pch.h"
#include <list>
#include <cassert>
#include <iostream>

using namespace std;
long long ch[100];

void coef(int num)
{
	ch[0] = 1;
	for (int i = 0; i < num; ch[0] = -ch[0], i++) {
		ch[1 + i] = 1;

		for (int j = i; j > 0; j--)
			ch[j] = ch[j - 1] - ch[j];
	}
}




bool isPrime1(int num) {
	coef(num);
	ch[0]++, ch[num]--;
	int i = num;
	while (i-- && ch[i] % num == 0);
	return i < 0;

}


bool isPrime(int num) {

	if (isPrime1(num))
		return true;
	else

		return false;


}

void SampleTest() {

	assert(isPrime(1) == 0);
	assert(isPrime(3) == 1);
	assert(isPrime(5) == 1);
	cout << "Test is okay!" << endl;

}




int main()
{
	SampleTest();
}
