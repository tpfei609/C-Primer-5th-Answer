#include <iostream>

int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "The product of ";
    std::cout << n1;
    std::cout << " and ";
    std::cout << n2;
    std::cout <<" is ";
    std::cout << n1 * n2;
    std::cout << std::endl;
    
    return 0;
}
