#include <iostream>

int main()
{
    const int size = 10;
    int arr1[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arr2[size];
    int* ptr_arr1 = arr1;
    int* ptr_arr2 = arr2;

    for (int i = 0; i < size; ++i)
    {
        *(ptr_arr2 + i) = *(ptr_arr1 + i);
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << arr1[i] << '\n';
    }
    return 0;
}