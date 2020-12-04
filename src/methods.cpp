#pragma once

#include <iostream>
#include "Structs.h"


void Translate()
{

    //входная строка
    char* str = new char[1024];

    std::cin.getline(str, 1024);

    //для выхода из цикла
    bool flag = true;л
    //для текущего символа строки
    unsigned short i = 0;

    while (flag) {

        //проверка на символ кирилицы
        if (str[i] == '\xD0' || str[i] == '\xD1') {
            //поиск позиции русского символа в массиве для биективного отображения в массив латинских букв
            char j = 0;
            bool isFind = false;
            while (j < 64 && !isFind) {
                if (rus[j][0] == str[i] && rus[j][1] == str[i+1]) {
                    std::cout << eng[j];
                    isFind = true;
                }
                j++;
            }
            if (!isFind)
                std::cout << str[i] << str[i+1];
            //следующая позиция символа строки
            i += 2;
        }
        //если символ не кирилицы, то просто выводим символ
        else {
            std::cout << str[i];
            //следующая позиция символа строки
            i++;
        }

        //проверка на конец строки
        if (str[i] == '\0' || i == 1024)
            flag = false;
    }

    delete[] str;

}
