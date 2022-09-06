#include <iomanip>
#include <iostream>
#include <sstream>
const unsigned int arr_size_x = 5;
const unsigned int arr_size_y = 5;
unsigned int ary[arr_size_x][arr_size_y];

long double fact(int N)
{
    if (N < 0) 
        return 0; 
    if (N == 0) 
        return 1; 
    else 
        return N * fact(N - 1); 
}
int main()
{
    setlocale(LC_ALL, "Russian");
    std::cout << "Заполненный массив:\n" << std::endl;
    for (unsigned int i = 0; i < arr_size_x; i++) {
        std::cout << "\n";
    for (unsigned int k = 0; k < arr_size_y; k++) {
        ary[i][k] = fact(i + k);
        if (k == 0) {
            std::cout << ary[i][k];
        }
        else {
            std::cout << std::setw(8) << ary[i][k];
        }
    }
} 
    std::cout << "\n";
    std::cout << "\n";
    std::cout << "Измененный массив:\n" << std::endl;
    int solo [(arr_size_x * arr_size_y) - (2*arr_size_x)];
    for (unsigned int i = 0; i < arr_size_x; i+=2) {
        for (unsigned int k = 0; k < arr_size_y; k++) {
            if (i == 0 && k == 0) {
              solo[i] = ary[i][k];
              std::cout << solo[i];
            }
            else {
                solo[i] = ary[i][k];
                std::cout << std::setw(8) << solo[i];
            }
        }
    }

}
