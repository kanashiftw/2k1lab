#include <iostream>
#include <string>
//Метод для посимвольного сравнения двух строчек (массивов char)
int mystrcmp(const char* line1, const char* line2) {
    const unsigned char* tochar1 = (const unsigned char*)line1;
    const unsigned char* tochar2 = (const unsigned char*)line2;
    while (*tochar1 != '\0') {//когда первый символ не конец строки
        if (*tochar2 == '\0') return  1;//1 если конец строки
        if (*tochar2 > *tochar1)   return -1;//-1 если символ 2 строки > символа 1 строки
        if (*tochar1 > *tochar2)   return  1;//1 если символ 1 строки > символа 2 строки
        tochar1++;
        tochar2++;
    }
    if (*tochar2 != '\0') return -1;//Если во второй строке еще есть символы возвращает -1
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string linefirst = "123";
    std::cout << "Первая строчка: " << linefirst << std::endl;
    const char* linecharf = linefirst.c_str();
    std::string linesecond = "122";
    std::cout << "Вторая строчка: " << linesecond << std::endl;
    const char* linechars = linesecond.c_str();
    //Вывод результата сравнения стандартной функции
    std::cout << "Результат сравнения стандартной функции: " << strcmp(linecharf, linechars) << std::endl;
    //Вывод результата сравнения методом, описаным выше
    std::cout << "Результат сравнения собственной функции: " << mystrcmp(linecharf, linechars);
}
