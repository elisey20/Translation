#include <iostream>
#include "Structs.h"


using namespace std;

int main()
{
	
	setlocale(LC_ALL, "");
	
	char* str = new char[1000];
	
	cin.getline(str, 1000);

	bool flag = true;
	unsigned short i = 0;

	while (flag) {
		if ((str[i] >= -64 && str[i] <= -1) || str[i] == -88 || str[i] == -72) {
			char j = 0;
			while (j < 64) {
				if (rus[j] == str[i]) {
					cout << eng[j];
					j = 64;
				}
				j++;
			}
		}
		else
			cout << str[i];
		i++;
		if (str[i] == '\0')
			flag = false;
	} 

	return 0;

}
