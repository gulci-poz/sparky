#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int a = 5;

	// wska�nik na int, zawiera adres zmiennej a w pami�ci
	// adresujemy bajty
	// wska�nik zawiera adres pierwszej kom�rki pami�ci (pierwszego bajtu) zmiennej a
	int* pa = &a;

	cout << a << endl;
	cout << pa << endl;

	// dereferencja wska�nika czyli zawarto�� zmiennej, na kt�r� wskazuje pa
	cout << *pa << endl;

	// zmiana warto�ci zmiennej a, nie zmieniamy wska�nika, tylko warto��, na kt�r� wskazuje
	*pa = 6;
	cout << a << endl;

	// definiujemy nowy blok pami�ci z t� sam� warto�ci� co zmienna a
	int b = *pa;

	cout << pa << endl;
	cout << &b << endl;

	// 34:45

	return 0;
}
