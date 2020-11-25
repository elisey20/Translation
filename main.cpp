#include <iostream>
#include "Structs.h"


using namespace std;

int main()
{
	char* str = new char[1000];

	setlocale(LC_ALL, "Russian");

	cin.getline(str, 1000);

	bool flag = true;
	unsigned short i = 0;
	
	//А - п .. р - ё



	while (flag) {
		if ((str[i] >= -64 && str[i] <= -1) || str[i] == -88 || str[i] == -72) {
			char j = 0;
			while (j < 64) {
				if (rus[j] == str[i])
					cout << eng[j];
			}
		}
		else
			cout << str[i];
		i++;
	} 

	return 0;

}
