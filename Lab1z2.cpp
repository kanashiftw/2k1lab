#include <iostream>
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
        std::cout << ary[i][k] << ", ";
    }
} 
    std::cout << "\n";
    std::cout << "Измененный массив:\n" << std::endl;
    std::cout<<"\n";
    int solo [(arr_size_x * arr_size_y) - (2*arr_size_x)];
    for (unsigned int i = 0; i < arr_size_x; i++) {
        if (i != 0) {
            if (i % 2 == 0) {
                i++;
            }
        }
        for (unsigned int k = 0; k < arr_size_y; k++) {
            solo[i] = ary[i][k];
            std::cout << solo[i] << ", ";
        }
    }

}

