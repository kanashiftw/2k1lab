﻿

#include <iostream>
#include <string>
unsigned int arr_size = 10;const int maxrng = 70;
const int minrng = -20;

int rrand(int range_min, int range_max) {
    return rand() % (range_max - range_min + 1) + range_min;
}
double* processArray(double arr[],int arrsize) {
    for (unsigned int i = 0; i < arrsize; i++) {
        arr[i] = rrand(-minrng, maxrng);
    }
    return arr;
}
double findmax(double array[]) {
    int a_max = array[0];
    for (int i = 1; i < arr_size; i++)
    {
        if (array[i] > a_max)
            a_max = array[i];
    }
    return a_max;
}
double* formated(double array[]) {
    double max = findmax(array);
  
    for (int i = 0; i < arr_size; i++) {
        array[i] /= max;
    }
    return array;
}
double findmaxindex(double array[]) {
    int index = 0;
    for (int i = 0; i < arr_size; i++)
       
    {
        if (array[i] == findmax(array)) {
             index = i;
        }
    }
    return index;
}
double* finallarr(double array[],int rewrite) {
    for (int i = findmaxindex(array); i < arr_size; i++){
        
    array[i] = rewrite - 48;
    }
    return array;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    double* ary = new double[arr_size];
    std::cout << "Заполненный массив:\n" << std::endl;
   
    processArray(ary, arr_size);
    for (int i = 0; i < arr_size; i++) {
        std::cout << ary[i] << ",  ";
    }
    std::cout <<"\n";
    std::cout << "Отформатированный массив:\n" << std::endl;
    formated(ary);
    for (int i = 0; i < arr_size; i++) {
        std::cout << ary[i] << ",  ";
    }
    std::cout << "\n";
    
    std::cout << "Введите значение для подмены\n" << std::endl;
    int rewrite = std::cin.get();
    std::cout << "Финальный массив:\n" << std::endl;
    finallarr(ary, rewrite);
    for (int i = 0; i < arr_size; i++) {
        std::cout << ary[i] << ",  ";
    }
    std::cout << "\n";
    delete[] ary;


    // ...
    return 0;
}

