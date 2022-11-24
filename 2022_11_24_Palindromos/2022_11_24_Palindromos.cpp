// 2022_11_24_Palindromos.cpp
// Fernando Fabian Patino Ibarra
// palabra para ver si una palabra es un palindromo
//

#include <iostream>
#include<cstdlib>
#include<string>

bool palindromo(char palabra[], int  inicio, int final) {
	if (inicio >= final) return true;
	if (palabra[inicio] == palabra[final])
		palindromo(palabra, inicio + 1, final - 1);
	else return false;
}

int main(void)
{
	char palabra [50];
	int size;
	bool pal;

	std::cout << "||==================================||" << std::endl;
	std::cout << "||           PALINDROMOS            ||" << std::endl;
	std::cout << "||         INGRESA UNA PALABRA      ||" << std::endl;
	std::cout << "||==================================||" << std::endl;

	std::cin.getline(palabra, 50);

	size = strlen(palabra);

	pal = palindromo(palabra, 0, size - 1);

	if (pal == true)  std::cout << " la palabra es un palindromo" << std::endl;
	else std::cout<<"la palabra no es un palindromo " << std::endl;
}