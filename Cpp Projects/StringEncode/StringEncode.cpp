#include <iostream>
#include <string>
#include <algorithm>


std::string StringEncode(std::string& Str);


int main()
{
    // принимаем строку
    std::string str ;
    std::cout << "Enter the line: \n";
    std::getline(std::cin, str);
    StringEncode(str);
    std::cout << str << std::endl;
    system("pause");
}

std::string StringEncode(std::string& Str)
{
    //Проверяем на пустую строку
    if (Str.empty()) {
        Str = "Error: String is empty!";
        return Str;
    }

    //Применяем tolover каждому символу строки.
    //Можно сделать в цикле, но есть функция трансформ, что делает это за нас.
    std::transform(Str.begin(), Str.end(), Str.begin(), tolower);

    std::string StrResult = "";

    //пробегаем по каждому элементу строки
    for (int i = 0; i < Str.length(); ++i)
    {
        //Узнаём сколько в строке таких элементов
        size_t Nelement = std::count(Str.begin(), Str.end(), Str[i]);

        //Если элемент один то пишем в результирующию строку '('
        if (Nelement == 1) { StrResult += '('; }
        //Если элементов много, то пишем в результирующую строку ')'
        else { StrResult += ')'; }
    }
    Str = StrResult;
    return StrResult;
}