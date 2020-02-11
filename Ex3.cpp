#include <iostream>

int main()
{
    const int size = 10;
    int arr[size] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int arr2[size];

    for (int i = 0; i < size / 2; ++i)
    {
        int tmp = *(arr + i);
        *(arr + i) = *(arr + size - 1 - i);
        *(arr + size - 1 - i) = tmp;
    }

    for (int i = 0; i < size; ++i)
    {
        *(arr2 + i) = *(arr + i);
    }

    for (int i = 0; i < size; ++i)
    {
        std::cout << *(arr2 + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}