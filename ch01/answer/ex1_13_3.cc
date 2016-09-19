#include <iostream>
int main()
{
    int v1 = 0, v2 = 0;
    std::cout << "Enter two integer:" << std::endl;
    std::cin >> v1 >> v2;
    int max = (v1 > v2) ? v1 : v2;
    int min = (v1 < v2) ? v1 : v2;
    for (int i = min; i < max; ++i)
        std::cout << i << " ";
    std::cout << std::endl;
}
