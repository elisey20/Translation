#pragma once

#include <iostream>
#include "Structs.h"

void addSymbols(char* res, unsigned short& iRes, const char* symbols, char maxi = 1)
{
    char i = 0;
    while (symbols[i] != '\0' && i < maxi)
    {
        res[iRes++] = symbols[i++];
    }
}

char* Translate(const char* str)
{

    //для выхода из цикла
    bool flag = true;
    //для текущего символа входной строки
    unsigned short iInp = 0;
    //для текущего символа выходной строки
    unsigned short iRes = 0;
    //Результат
    char* res = new char[1024];

    while (flag)
    {

        //проверка на символ кирилицы
        if (str[iInp] == '\xD0' || str[iInp] == '\xD1')
        {
            //поиск позиции русского символа в массиве для биективного отображения в массив латинских символов
            char j = 0;
            bool isFind = false;
            while (j < 66 && !isFind)
            {
                // Если нашли совпадение в строке и массиве русских символов до добавляем в выходную строку
                // соответствующие латинские символы
                if (rus[j][0] == str[iInp] && rus[j][1] == str[iInp + 1])
                {
                    addSymbols(res, iRes, eng[j], 4);
                    isFind = true;
                }
                j++;
            }
            if (!isFind)
            {
                addSymbols(res, iRes, &str[iInp], 2);
            }
            //следующая позиция символа строки
            iInp += 2;
        }
        //если символ не кирилицы, то просто выводим символ
        else
        {
            addSymbols(res, iRes, &str[iInp]);
            iInp++;
        }

        //проверка на конец строки
        if (str[iInp] == '\0' || iInp >= 1024)
            flag = false;
    }

    res[iRes] = '\0';

    return res;

}
