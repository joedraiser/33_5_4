#include <iostream>

template < typename T >
void input(T array[8])
{
    std::cout << "Fill the array (8):\n";
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "Input " << i+1 << " element: ";
        std::cin >> array[i];
    }
}

template < typename T >
T average(T array[8])
{
    T result=0;
    for (int i = 0; i < 8; ++i)
    {
        result+=array[i];
    }

    return result/8;
}

int main()
{
    float array[8];

    input(array);

    std::cout << "Average :" << average(array);
}
