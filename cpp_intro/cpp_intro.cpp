#include "stdafx.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

	int a = 5;

	// wskaŸnik na int, zawiera adres zmiennej a w pamiêci
	// adresujemy bajty
	// wskaŸnik zawiera adres pierwszej komórki pamiêci (pierwszego bajtu) zmiennej a
	int* pa = &a;

	cout << a << endl;
	cout << pa << endl;

	// dereferencja wskaŸnika czyli zawartoœæ zmiennej, na któr¹ wskazuje pa
	cout << *pa << endl;

	// zmiana wartoœci zmiennej a, nie zmieniamy wskaŸnika, tylko wartoœæ, na któr¹ wskazuje
	*pa = 6;
	cout << a << endl;

	// definiujemy nowy blok pamiêci z t¹ sam¹ wartoœci¹ co zmienna a
	int b = *pa;

	cout << pa << endl;
	cout << &b << endl;

	// 34:45

	return 0;
}
