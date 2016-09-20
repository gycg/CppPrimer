#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item book;
    std::cin >> book;
    // read ISBN, number of copies sold, and sales price
    std::cout << book << std::endl;
    // write ISBN, number of copies sold, total revenue, and sales price
    return 0;
}
