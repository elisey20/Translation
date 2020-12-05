#include <iostream>
#include "methods.h"

using namespace std;

int main()
{

    char* str = new char[1024];

    cin.getline(str, 1024);

	char* res = Translate(str);

	cout << res;

    return 0;
	
}
