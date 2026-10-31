#include <iostream>

int main()
{
    int a{}, b{}, c{};
    std:: cout << "Enter the first number: ";
    std:: cin >> a;
    std:: cout << "Enter the second number: ";
    std:: cin >> b;
    std:: cout << "Enter the third number: ";
    std:: cin >> c;
    int result1 = a >= b
                    ? a >= c
                        ? a : c
                    : b >= c
                        ? b : c;
    int result2 = a <= b
                    ? a <= c
                        ? a : c
                    : b <= c
                        ? b : c;
    int result3 = a + b + c - result1 - result2;
    std:: cout << "Result: "<< result1 << " " << result3 << " " << result2 << std::endl;
    return EXIT_SUCCESS;

}