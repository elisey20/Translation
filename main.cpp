#include <iostream>
#include <windows.h>
#include "Structs.h"

using namespace std;

void Translate()
{

	//для локализации ввода-вывода
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//входная строка
	char* str = new char[1000];

	cin.getline(str, 1000);

	//для выхода из цикла
	bool flag = true;
	//для текущего символа строки
	unsigned short i = 0;

	while (flag) {

		//проверка на символ кирилицы
		if ((str[i] >= -64 && str[i] <= -1) || str[i] == -88 || str[i] == -72) {

			//поиск позиции русского символа в массиве для биективного отображения в массив латинских букв
			char j = 0;
			while (j < 64) {
				if (rus[j] == str[i]) {
					cout << eng[j];
					j = 64;
				}
				j++;
			}

		}
		//если символ не кирилицы, то просто выводим символ 
		else
			cout << str[i];

		//следующая позиция символа строки
		i++;

		//проверка на конец строки
		if (str[i] == '\0' || i == 1000)
			flag = false;
	}

	delete[] str;

}

int main()
{
	
	Translate();

	return 0;
	
}
