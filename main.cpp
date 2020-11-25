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
		if ((str[i] >= -64 && str[i] <= -1) || str[i] == -88 || str[i] == -72)

		else
			cout << str[i];
	} 

	return 0;

}
