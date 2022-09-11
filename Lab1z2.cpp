#include <iomanip>
#include <iostream>
#include <sstream>
const int arr_size_x = 5;
const int arr_size_y = 5;
int ary[arr_size_x][arr_size_y];//Инициализация массива ary 
//с размерами arr_size_x и arr_size_y

//Метод вычисления факториала
int  fact(int N)
{
    if (N < 0)
        return 0;
    if (N == 0)
        return 1;
    else
        return N * fact(N - 1);
}
//Метод вывода массива
void printArray(int array[arr_size_x][arr_size_y]) {
    std::cout << "Заполненный массив:\n";
    for (int i = 0; i < arr_size_x; i++) {
        std::cout << "\n";
        for (int k = 0; k < arr_size_y; k++) {
            array[i][k] = fact(i + k);
            if (k == 0) {
                std::cout << array[i][k];
            }
            else {
                std::cout << std::setw(8) << array[i][k];
            }
        }
    }
}
//Метод вывода результирующего массива согласно варианту
void printnewArray(int array[arr_size_x][arr_size_y]) {
    std::cout << "Измененный массив:\n" << std::endl;
    int solo[(arr_size_x * arr_size_y) - (2 * arr_size_x)];
    for (unsigned int i = 0; i < arr_size_x; i += 2) {
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

int main()
{
    setlocale(LC_ALL, "Russian");
    printArray(ary);
    std::cout << "\n\n";
    printnewArray(ary);
}
