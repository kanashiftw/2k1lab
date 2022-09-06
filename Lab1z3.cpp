#include <iostream>
#include <string>
int mystrcmp(const char* line1, const char* line2) {
    const unsigned char* tochar1 = (const unsigned char*)line1;
    const unsigned char* tochar2 = (const unsigned char*)line2;
    while (*tochar1 != '\0') {
        if (*tochar2 == '\0') return  1;
        if (*tochar2 > *tochar1)   return -1;
        if (*tochar1 > *tochar2)   return  1;
        tochar1++;
        tochar2++;
    }
    if (*tochar2 != '\0') return -1;
    return 0;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    std::string linefirst = "Жди меня, мы когда-нибудь встретимся, заново";
    std::cout << "Первая строчка: " << linefirst<<std::endl;
    const char* linecharf = linefirst.c_str();
    std::string linesecond = "Жди меня, обреченно и, может быть, радостно";
    std::cout << "Вторая строчка: " << linesecond << std::endl;
    const char* linechars = linesecond.c_str();
    std::cout << "Результат сравнения стандартной функции: "<<strcmp(linecharf, linechars) << std::endl;
    std::cout << "Результат сравнения собственной функции: " << mystrcmp(linecharf, linechars);
}
