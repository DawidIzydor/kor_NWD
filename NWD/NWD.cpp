// NWD.cpp: Określa punkt wejścia dla aplikacji konsoli.
//

#include "stdafx.h"

#include <iostream>
#include <cstdlib>

int main()
{

	int liczba;
	int liczba2;

	std::cout << "Podaj pierwsza liczbe: ";
	std::cin >> liczba;

	std::cout << "Podaj druga liczbe: ";
	std::cin >> liczba2;

	int a = liczba;
	int b = liczba2;

	while (liczba != liczba2)
	{
		if (liczba > liczba2)
		{
			liczba -= liczba2;
		}
		else {
			liczba2 -= liczba;
		}
	}

	std::cout << "NWD tych liczb to: " << liczba<< "\n";

	int nww = a * b / liczba;

	std::cout << "NWW tych liczb to: " << nww << "\n";


	system("PAUSE");

    return 0;
}

